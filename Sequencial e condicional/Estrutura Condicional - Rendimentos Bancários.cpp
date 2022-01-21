#include <iostream>
using namespace std;

int main(){
	
	float tipodoinvestimento, valor, conta1, conta2;
	
	cin>> tipodoinvestimento;
	cin>> valor;
	
	
	if(tipodoinvestimento == 1){
		conta1= (valor + (0.5*valor)/100);
		cout<< conta1;
		}else if(tipodoinvestimento == 2){
		conta2= (valor + (3*valor)/100)-30;	
		cout<<	conta2;
			}
	
	return 0;
}
