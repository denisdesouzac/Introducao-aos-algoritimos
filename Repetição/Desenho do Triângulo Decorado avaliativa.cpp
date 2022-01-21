#include <iostream>
using namespace std;

int main(){
	
	int qlinhas = 1, num;// q linhas = quantidade de linhas/ num = numero
	cin >> num;
	
	while(qlinhas <= num){
		
		int nca = 1;// nca = número de caracteres
		char ca(64);// ca = carcactere /64 = @ e 35=#
		
		while(nca <= qlinhas){
			cout  << ca;
			nca++;
			if(nca % 2 != 0){
				ca = (64);
			}else{
				ca = (35);
		}
			}
		cout << "\n";
		
		qlinhas++;
		}


	return 0;
}
