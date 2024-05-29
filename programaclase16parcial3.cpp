#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numeros;
    int num;
    int suma = 0;

    cout << "Introduce hasta 20 n�meros enteros (introduce 0 para terminar antes):" << endl;

    
    for (int i = 0; i < 20; ++i) {
        cin >> num;
        if (num == 0) {
            break;
        }
        numeros.push_back(num);
        suma += num;
    }

   
    cout << "N�meros en orden inverso:" << endl;
    for (int i = numeros.size() - 1; i >= 0; --i) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    
    cout << "Suma de los n�meros: " << suma << endl;

    return 0;
}
