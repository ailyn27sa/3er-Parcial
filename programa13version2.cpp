#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
  srand(time(0)); 
  int matriz[3][3];
  
  // Llenar la matriz con números aleatorios
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      matriz[i][j] = rand() % 10; 
    }
  }

  // Mostrar la matriz original
  cout << "Matriz original:" << endl;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << matriz[i][j] << " ";
    }
    cout << endl;
  }

  // Sumar las columnas
  int suma_columnas[3] = {0}; // Inicializar un arreglo para almacenar la suma de cada columna
  
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      suma_columnas[j] += matriz[i][j]; // Sumar el elemento actual de la columna 'j'
    }
  }

  // Mostrar la suma de cada columna
  cout << "Suma de las columnas:" << endl;
  for (int j = 0; j < 3; j++) {
    cout << "Columna " << j+1 << ": " << suma_columnas[j] << endl;
  }

  // Sumar las filas
  int suma_filas[3] = {0}; // Inicializar un arreglo para almacenar la suma de cada fila
  
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      suma_filas[i] += matriz[i][j]; // Sumar el elemento actual de la fila 'i'
    }
  }

  // Mostrar la suma de cada fila
  cout << "Suma de las filas:" << endl;
  for (int i = 0; i < 3; i++) {
    cout << "Fila " << i+1 << ": " << suma_filas[i] << endl;
  }

  return 0;
}