#include "recuperadorDeValores.h"
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <string>
#include <algorithm>
#include <iterator>
#include <tuple>

std::tuple<matFrac, matFrac> RecuperadorDeValores::recuperarValorMatFrac(std::string rutaMatrizA, std::string rutaMatrizB) {
    matFrac mA(0, 0);
    matFrac mB(0, 0);

    parserMatriz(mA, rutaMatrizA);
    parserMatriz(mB, rutaMatrizB);

    if (mA.getFila() != mB.getFila() || mA.getColumna() != mB.getColumna()) {
        throw std::invalid_argument("Las matrices deben tener las mismas dimensiones para poder sumarlas.");
    }

    return std::tuple(mA, mB);

}

void RecuperadorDeValores::setRutaMatrizA(std::string ruta) {
    rutaMatrizA = ruta;
}

void RecuperadorDeValores::setRutaMatrizB(std::string ruta) {
    rutaMatrizB = ruta;
}

void RecuperadorDeValores::parserMatriz(matFrac& m, std::string ruta) {
    // leer contenido
    auto readFileContent = [](const std::string& path) -> std::string {
        std::ifstream file(path);
        if (!file.is_open()) throw std::runtime_error("No se pudo abrir el archivo: " + path);
        std::string s((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
        file.close();
        return s;
    };

    auto countRowsColumns = [](const std::string& content, int& filas, int& columnas) {
        filas = 0;
        for (char c : content) if (c == ';') filas++;
        filas = (content.empty() ? 0 : filas + 1);
        size_t firstSep = content.find(';');
        std::string firstRow = (firstSep == std::string::npos) ? content : content.substr(0, firstSep);
        columnas = 0;
        for (char c : firstRow) if (c == ',') columnas++;
        columnas = (firstRow.empty() ? 0 : columnas + 1);
    };

    auto parseContentToMatrix = [&](matFrac& mat, const std::string& content, int filas, int columnas, const std::string& path) {
        int fila = 0;
        int columna = 0;
        long num = 0;
        long den = 0;
        bool readingNum = true;
        bool inNumber = false;

        auto flushFraction = [&]() {
            if (inNumber) {
                if (readingNum) den = 1;
                if (fila < 0 || fila >= filas || columna < 0 || columna >= columnas) {
                    throw std::invalid_argument("Indice de matriz fuera de rango al parsear: fila=" + std::to_string(fila) + " columna=" + std::to_string(columna));
                }
                mat.setFraccion(fila, columna, static_cast<int>(num), static_cast<int>(den));
                columna++;
                if (columna > columnas) {
                    throw std::invalid_argument("Numero inconsistente de columnas en la fila " + std::to_string(fila) + " en: " + path);
                }
            }
            num = den = 0;
            readingNum = true;
            inNumber = false;
        };

        for (size_t i = 0; i < content.size(); ++i) {
            char c = content[i];
            if (c == '\r' || c == '\n' || c == ' ') continue;
            if (std::isdigit(static_cast<unsigned char>(c))) {
                inNumber = true;
                if (readingNum) num = num * 10 + (c - '0');
                else den = den * 10 + (c - '0');
            } else if (c == '/') {
                readingNum = false;
            } else if (c == ',') {
                flushFraction();
            } else if (c == ';') {
                flushFraction();
                if (columna != columnas) {
                    throw std::invalid_argument("Numero inconsistente de columnas en la fila " + std::to_string(fila) + " en: " + path);
                }
                fila++;
                columna = 0;
            } else {
                // ignorar otros caracteres
            }
        }
        flushFraction();

        int parsedRows = fila + (columna != 0 ? 1 : 0);
        if (columna != 0 && columna != columnas) {
            throw std::invalid_argument("Numero inconsistente de columnas en la ultima fila en: " + path);
        }
        if (parsedRows != filas) {
            throw std::invalid_argument("Numero inconsistente de filas en el archivo: " + path + ", esperado=" + std::to_string(filas) + ", obtenido=" + std::to_string(parsedRows));
        }
    };

    std::string content = readFileContent(ruta);
    int filas = 0, columnas = 0;
    countRowsColumns(content, filas, columnas);
    if (filas == 0 || columnas == 0) {
        throw std::invalid_argument("Matriz vacia o formato invalido: " + ruta);
    }
    m = matFrac(filas, columnas);
    parseContentToMatrix(m, content, filas, columnas, ruta);
}