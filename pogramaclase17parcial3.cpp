#include <iostream>

const int FILAS = 4;
const int COLUMNAS = 3;

int sumaColumna(int matriz[FILAS][COLUMNAS], int columna) {
    int suma = 0;
    for (int i = 0; i < FILAS; ++i) {
        suma += matriz[i][columna];
    }
    return suma;
}

int main() {
    int tabla[FILAS][COLUMNAS];

 
    std::cout << "Ingrese los valores de la tabla de " << FILAS << " filas por " << COLUMNAS << " columnas:" << std::endl;
    for (int i = 0; i < FILAS; ++i) {
        for (int j = 0; j < COLUMNAS; ++j) {
            std::cout << "Ingrese el valor para la fila " << i+1 << " columna " << j+1 << ": ";
            std::cin >> tabla[i][j];
        }
    }

    int mayorSuma = sumaColumna(tabla, 0); 
    for (int j = 1; j < COLUMNAS; ++j) {
        int suma = sumaColumna(tabla, j);
        if (suma > mayorSuma) {
            mayorSuma = suma;
        }
    }

    std::cout << "La mayor suma de las columnas es: " << mayorSuma << std::endl;

    return 0;
}
