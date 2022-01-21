#include <iostream>
using namespace std;

int  fatorialDuplo(int N);

int main(){

	int num;
	
	cin >> num;// Digite o número desejado
	
	cout << fatorialDuplo(num);

    return 0;
}

// Função que irá calcular o fatorial duplo
int fatorialDuplo(int N){
	
	
	if( N == 0){
		
		return 1;
		
	}else if( N  == 1 ){
		
		return 1;
		
	}else{
		
		return (N * fatorialDuplo(N - 2));
		
	}
	
	return 0;
}
