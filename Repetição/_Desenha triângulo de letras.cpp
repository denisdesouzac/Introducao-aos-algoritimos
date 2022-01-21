#include <iostream>
using namespace std;

int main(){
	
	int qlinhas = 1, num;
	
	cin >> num;
	
	while(qlinhas <= num){
		int nletras = 1;
		char letras(97);
		while(nletras <= qlinhas){
			cout  << letras<<" ";
			nletras++;
			letras++;
			}
		cout << "\n";
		
		qlinhas++;
		}


	return 0;
}
