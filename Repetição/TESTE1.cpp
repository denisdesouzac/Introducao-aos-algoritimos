#include <iostream>
using namespace std;

int main(){
	
	int qlinhas = 1, num;
	
	cin >> num;
	
	while(qlinhas <= num){
		int ncara = 1;
		char ast(42);
		while(ncara <= qlinhas){
			cout  << ast<< " ";
			ncara++;
			}
		cout << "\n";
		
		qlinhas++;
		}


	return 0;
}
