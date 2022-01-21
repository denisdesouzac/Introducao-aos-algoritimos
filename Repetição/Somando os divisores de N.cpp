#include <iostream>
using namespace std;

int main(){
	
	int N, divisor, d, conta, resultado = 0;// d = divisor do número
	
	cin >> N;
	
	divisor = N;
	
	while(divisor <= N){
		
		conta = N / divisor ;
		
		if(N % divisor == 0){
		d = conta;
		resultado = resultado + d;
		if(d == N){
		cout << d << "=" << resultado;
		break;	
		}
		cout << d << "+";		
		}
		
		divisor--;
	
	}
	
	return 0;
}
