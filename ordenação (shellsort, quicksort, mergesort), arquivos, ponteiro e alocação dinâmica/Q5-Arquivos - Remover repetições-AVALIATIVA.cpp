#include <iostream>
#include <fstream>
using namespace std;

int main(){
	
	ifstream arquivo1("entrada.txt");
	
	ofstream arquivo2("saida.txt");
	
	int quantidade, num;
	int i = 1;
	arquivo1 >> quantidade;// Lê a quantidade.

	int vetor[quantidade];// Vetor para manipulação dos dados.
	int cont = 0;
	
	while(i <= quantidade){
		
		arquivo1 >> num;
		
		for(int j = i - 1; j >= 0; j--){
			
			if(num == vetor[j]){// A cada número igual já colocado no vetor...
				cont ++;// Contador aumenta 1.
			}
		}
		if(cont == 0){// Se o contador estiver em 0...
			vetor[i-1] = num;// O número comparado é colocado no vetor.
			i++;
		}else{// Caso contrário
			quantidade--;// Diminui 1 na quantidade.
		}
		cont = 0;// Zera contador.
	}
	
	// Estrutura que passa os dados do vetor para o arquivo.
	for(int i = 0; i < quantidade; i++){
		arquivo2 << vetor[i] << " ";
	}

	arquivo1.close();// Fechar arquivo.
	arquivo2.close();// Fechar arquivo.
	
	return 0;
}
