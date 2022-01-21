#include <iostream>
#include <fstream>
using namespace std;

double calcula_phi(int n_termos);

int main(){

    int n_termos;
    cin >> n_termos;// Digite o número de termos
    cout << calcula_phi(n_termos) << "\n";// Imprima o retorno da função(número phi).
    return 0;
}

// Função que calcula o número phi.
double calcula_phi(int n_termos){
    
    ofstream numero_aureo("phi.txt", ios::app);

    double phi;
    if(n_termos == 1){
        phi = 1;
        numero_aureo << phi << endl;
    }else{
        phi = 1 + 1/calcula_phi(n_termos - 1);
        numero_aureo << phi << endl;
    }

    numero_aureo.close();//Fecha arquivo.
    return phi;
}
