#include <iostream>
using namespace std;

int main(){

int num, resto, cont = 0;
int aux;

cin >> num;

aux = num;


while(cont <= 1 ){

    resto = aux % 10;
    
    aux = aux / 10;

    cont ++;

    if(cont == 1){
        cout << resto;
    }

}

    return 0;
}