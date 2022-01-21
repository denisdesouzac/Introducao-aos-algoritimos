#include <iostream>
using namespace std;

int main(){
	
	int N, vezes = 1, nportas = 1, estado, cont = 1;
	bool fechado = 0, aberto =1,x;
	cin >> N;
	
	while(vezes <= N){
		
		while (nportas <= N){
			if(nportas % N == 0){
		
			if (cont % 2 == 0){
				estado = fechado;
			}else{
				estado = aberto;
				x = nportas;	
			}
			cont ++;
			nportas ++;
			}
		}
		N--;
		vezes++;
	}
	
	if (estado == aberto){
	cout << x;
	}
	return 0;
}
