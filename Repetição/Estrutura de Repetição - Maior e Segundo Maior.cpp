#include <iostream>
using namespace std;

int main(){

	int num;
	int maior;
	int segundo_maior;
	int cont = 1;
	int soma = 0, media;
	
	cin >> num;
	soma += num;
	maior = num;
	segundo_maior = 0;
	
	while(cont <= 6){
		
		
		if(num > maior){
			segundo_maior = maior;
			maior = num;
		}
		cin >> num;
		soma += num;
		if(num > segundo_maior and num != maior){
			segundo_maior = num;
		}
		
		cont++;
	}
	
	media = (soma - (maior + segundo_maior))/ 5;
	
	cout << maior << "\n";
	cout << segundo_maior << "\n";
	cout << media << "\n";
	
	return 0;
}
