#include <iostream>
using namespace std;

int main(){
	
	int num, contGeral = 1;
	double resultado = 1, m, j = 1.0;// m = multiplicação do fatorial/ j = contador do fatorial
	
	cin >> num;
	
	while(contGeral < num){
		m = 1;
		j = 1;
		while(j <= contGeral){
			m *= j;
			j++;	
		}
		resultado += 1/m;
		contGeral++;
	}	
	cout << resultado;
	
	return 0;
}