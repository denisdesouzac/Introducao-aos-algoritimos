#include <iostream>
#include <fstream>
using namespace std;

int main(){

	string nome_arquivo;
	cin >> nome_arquivo;
	ifstream entrada(nome_arquivo.c_str()); 

	string letras;
	int tamanho1 = 0;

	getline(entrada, letras);
	tamanho1 = letras.size();

	int num_busca;
	cin >> num_busca;
	cout << letras[num_busca] << "\n";

    entrada.close();

	ifstream entrada2(nome_arquivo.c_str());// Abre o arquivo para uma segunda leitura.

	string palavras;
	int cont_palavras = 0;

	while (entrada2 >> palavras){
		cont_palavras++;
	}

	ofstream saida("resultado.txt");// Criação do arquivo de saída.

	saida << tamanho1 << " ";
	saida << cont_palavras;

	entrada2.close();// Fecha o arquivo.
    
	return 0;
}