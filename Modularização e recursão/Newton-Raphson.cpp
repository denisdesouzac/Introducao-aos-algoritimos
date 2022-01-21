#include <iostream>
#include <cmath>
#include <iomanip>
//f(x)=tan(x)

using namespace std;

int main (){
    long double x=3.0;//valor inicial em long double para uma maior precisão.

    long double pi;

    while(x<=3.2){//intervalo em que será calculado o valor da função.
        pi=x-tan(x);//expressão de newton raphson usando tangente.
        cout<<"o valor da raiz e:"<<" "<<setprecision(20)<<fixed<<pi<<endl;
        //resultado com 20 casas decimais para a comparaçao.
        x+=0.001;
    }
    return 0;
}
