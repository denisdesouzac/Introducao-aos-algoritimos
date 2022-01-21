#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	float salario=0;// salário em reais
	
	cin>> salario;
	
	float dollar= 2.13;
	float euro= 2.84;
	float libra= 3.34;
	
	float sd= salario/dollar;// salário em dollar 
	float se= salario/euro;// salário em euro
	float sl= salario/libra;// salário em libra
	
	cout << setprecision(2) << fixed << endl;
	cout << sd <<"\n"<< se <<"\n"<< sl <<"\n";
	
	
	return 0;
}
