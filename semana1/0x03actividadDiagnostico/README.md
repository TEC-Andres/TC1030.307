# Actividad de Diagnóstico - Programación Orientada a Objetos

## ¿Cómo correr el programa?
Despues de hacer build, el ejecutable se encontrará en la carpeta `__release__`. Dentro de esta carpeta, se necesitarán dos archivos de texto:
```txt
# __release__/matrizA.txt
2/3, 3/5, 5/7; 6/11, 8/13, 1/17; 8/19, 1/23, 3/29
```

```txt
# __release__/matrizB.txt
1/2, 2/3, 4/5; 6/7, 10/11, 12/13; 16/17, 18/19, 22/23
```

> [!Warning]
> El archivo de texto no debe de tener mas que una sola linea. Solo caracteres numéricos, comas, puntos y comas. 

Y luego, se tendrá que ejecutar el programa desde la terminal, pasando como argumentos los nombres de los archivos de texto:
```bash
./ActividadDiagnostico matrizA.txt matrizB.txt
```

## Build 
```bash
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build --config Release
```

## Requirements
- C++20 compatible compiler
- CMake 3.20 or higher
- Developer Command Prompt for Visual Studio (for Windows users)