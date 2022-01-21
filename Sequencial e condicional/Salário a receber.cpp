#include <iostream>

using namespace std;

int main(){
	float salario_minimo=0;
	float horas=0;//número de horas trabalhadas
	
		cin >> salario_minimo;
	
		cin >> horas;
	
	float vht= (salario_minimo*5)/100;// valor da hora trabalhada
	float salario_bruto= vht*horas;
	float imposto= (salario_bruto*23)/100;
	float salario= (salario_bruto - imposto);
	 
	cout << salario;

	return 0;
}
