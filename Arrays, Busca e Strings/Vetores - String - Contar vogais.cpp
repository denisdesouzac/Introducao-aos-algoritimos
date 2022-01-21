#include <iostream>
using namespace std;

int contar_V(string palavra, int tamanho, int& vogais);

int main(){

    string palavra;

    cin >> palavra;// Digite uma palavra qualquer.

    int tamanho = palavra.length();// Irá contar o tamanho do vetor.
    int vogais = 0;// Inicializar o número de vogais.

    contar_V(palavra, tamanho, vogais);// Chamar a função para contar vogais.
    
    cout << vogais;// Imprima o número de vogais.

    return 0;
}

// Função que irá contar as vogais.
int contar_V(string palavra, int tamanho, int& vogais){

	//Letras de acordo com a tabela ASCII.
	char a(97);
	char e(101);
	char i(105);
	char o(111);
	char u(117);
	
	
	// Verificação de cada elemento da string.
    for(int cont = 0; cont < tamanho; cont++){
        if(palavra[cont] == a){
            vogais ++;
        }
        if(palavra[cont] == e){
            vogais ++;
        }
        if(palavra[cont] == i){
            vogais ++;
        }
        if(palavra[cont] == o){
            vogais ++;
        }
        if(palavra[cont] == u){
            vogais ++;
        }
    }

    return vogais;
}
