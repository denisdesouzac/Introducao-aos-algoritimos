#include <iostream>
using namespace std;

int adcao(int& N1, int N2, int& resultado);

int main(){

	int num1, num2;
	int resultado = 0;
	
	cin >> num1;
	cin >> num2;
	
	adcao(num1, num2, resultado);
	
	cout << resultado;

    return 0;
}

int adcao(int& N1, int N2, int& resultado){
	
	if(resultado != N1 * N2){
		adcao(N1, N2, resultado += N1);		
	}
	
	return resultado;
}
