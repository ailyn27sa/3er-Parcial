#include <iostream>
using namespace std;

int main() {

  int matriz[2][2];

 
  matriz[0][0] = 10;
  matriz[0][1] = 20;
  matriz[1][0] = 30;
  matriz[1][1] = 40;

  // Suma de los elementos de la matriz
  int suma = 0;
  for(int i = 0; i < 2; i++) {
    for(int j = 0; j < 2; j++) {
      suma += matriz[i][j];
    }
  }

  cout << "El dato que hay en la fila 1 y columna 1 es: " << matriz[0][0] << endl;
  cout << "El dato que hay en la fila 1 y columna 2 es: " << matriz[0][1] << endl;
  cout << "El dato que hay en la fila 2 y columna 1 es: " << matriz[1][0] << endl;
  cout << "El dato que hay en la fila 2 y columna 2 es: " << matriz[1][1] << endl;
  
  // Imprimir la suma de los elementos de la matriz
  cout << "La suma de los elementos de la matriz es: " << suma << endl;

  return 0;
}