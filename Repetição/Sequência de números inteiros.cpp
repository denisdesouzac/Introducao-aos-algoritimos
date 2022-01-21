#include <iostream>
using namespace std;

int main(){
	
	int num, contPositivo = 0,contNegativo = 0;
	float contTotal = 0, media, pPositivo, pNegativo,soma = 0;
	
	while( num != 0){
		cin >> num;
		
		if(num > 0){
			contPositivo++;
			soma +=  num;
		}else if(num < 0){
			contNegativo++;
			soma +=  num;
		}
		contTotal = contPositivo + contNegativo;
		
	}
	
	media = soma/contTotal;
	
	cout << media << endl;
	cout << contPositivo << endl;
	cout << contNegativo << endl;
	
	pPositivo = (contPositivo) / contTotal;
	pNegativo = (contNegativo) / contTotal;
	
	cout << pPositivo << endl;
	cout << pNegativo << endl;

	return 0;
}
