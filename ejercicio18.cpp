#include <iostream>
using namespace std;
int main(){

    double horas, precio_hora, salario;
	cout<<"ingrese las horas trabajadas: ";
	cin>>horas;
	cout<<"ingrese el pago por hora: ";
	cin>>precio_hora;

	salario= horas * precio_hora;

	cout<<"el salario a pagar es: " << salario << endl;
	return 0;
}