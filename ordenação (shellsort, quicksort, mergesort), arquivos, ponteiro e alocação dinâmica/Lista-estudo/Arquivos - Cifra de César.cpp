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

    ofstream saida("cifrado");

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

// Função que troca as letras.
char troca_letra( char& aleatoria ){

    string alfabeto = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    for(int i = 0; i < 26; i++){
        
        if( aleatoria == 'X'){
            aleatoria = 'A';
            return aleatoria;           
        }else if(aleatoria == 'Y'){
            aleatoria = 'B';
            return aleatoria;
        }else if(aleatoria == 'Z'){
            aleatoria = 'C';
            return aleatoria;
        }else if(alfabeto[i] == aleatoria){
            aleatoria = alfabeto[i+3];
            return aleatoria;
        }
    }
    return aleatoria;
}
