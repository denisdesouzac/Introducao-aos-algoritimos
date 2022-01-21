#include <iostream>
using namespace std;

int main(){
	
	int num, qlinhas = 1, geral =1;// qlinhas= quantidade de linhas/ geral = contador de caracteres no geral
	char cara = (46);
	cin >> num;
	
	while( qlinhas <= num ){
		
		int qcolu = 1;//qcolu = quantidade de colunas
		if(geral % 2 != 0){
			cara = (46);//cara = caracteres
		}else{
			cara = (35);
			}
		
		while (qcolu <= num){
			
			cout << cara;
			qcolu++;
			geral++;
			
			if(geral % 2 != 0){
				cara = (46);
			}else{
				cara = (35);
					}
			}
		
		cout << "\n";
		
		qlinhas++;
		
		}

	return 0;
}
