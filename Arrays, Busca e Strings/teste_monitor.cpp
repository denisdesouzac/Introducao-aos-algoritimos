#include <iostream>
using namespace std;

void sem_repetidas(string& palavra, int& tamanho);

int main(){

	string palavra;
	cin >> palavra;

	int tamanho;
	tamanho = palavra.size();

	sem_repetidas(palavra, tamanho);
	
	for(int cont = 0; cont <= tamanho; cont ++){
		cout << palavra[cont];
	}
	return 0;
}

void sem_repetidas(string& palavra, int& tamanho){
	
	for(int i = 1; i <= tamanho; i++){
		if(palavra[i] == palavra[i - 1]){
			for(int j = i-1; j < tamanho; j++){
				palavra[j] = palavra[j + 1];
			}
			i--;
		}
		tamanho --;
	}
	tamanho ++;
}
