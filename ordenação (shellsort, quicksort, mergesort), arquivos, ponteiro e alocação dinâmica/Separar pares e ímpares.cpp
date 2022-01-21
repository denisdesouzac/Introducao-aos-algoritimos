#include <iostream>
#include <fstream>
using namespace std;

int main(){

    ifstream arquivo_inicial("numeros");
    int numeral;

    ofstream arquivo_par("pares");
    ofstream arquivo_impar("impares");

    if(arquivo_inicial){
        while(arquivo_inicial >> numeral){

            if(numeral % 2 == 0){
                arquivo_par << numeral << " ";
            }else{
                arquivo_impar << numeral << " ";
            }
        }
    }
    arquivo_inicial.close();
    arquivo_par.close();
    arquivo_impar.close();
    return 0;
}