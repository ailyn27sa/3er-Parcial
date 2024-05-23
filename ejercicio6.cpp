#include <iostream>
using namespace std;

int main() {
    int unidades, precio, subtotal;

    cout << "Ingrese la cantidad de unidades: ";
    cin >> unidades;
    cout << "Cantidad de unidades: " << unidades << endl;

    cout << "Ingrese el precio: ";
    cin >> precio;
    cout << "Precio: " << precio << endl;

    subtotal = unidades * precio;
    cout << "Subtotal: " << subtotal << endl;

    return 0;
}