#include <iostream>
#include <fstream>
using namespace std;

char troca_letra( char& aleatoria );

int main(){

    string nome_do_arquivo;
    cin >> nome_do_arquivo;
    ifstream information(nome_do_arquivo.c_str());

    string frase;
    char aux;
    int tamanho;

    ofstream saida("cifrado.txt");

    while(getline(information, frase)){

        tamanho = frase.size();
        for(int i = 0; i < tamanho; i++){
            aux = frase[i];
            troca_letra(aux);
            saida << aux;
        }
        saida << endl;
    }
    
    information.close();// Fecha arquivo.
    saida.close();// Fecha arquivo
   
    return 0;
}

// Função que inverte as letras.
char troca_letra( char& aleatoria ){

    string alfabeto = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    int j = 25;
    for(int i = 0; i < 26; i++){
        
        if(alfabeto[i] == aleatoria){
            aleatoria = alfabeto[j];
            return aleatoria;
        }
        j--;
    }
    return aleatoria;
}
