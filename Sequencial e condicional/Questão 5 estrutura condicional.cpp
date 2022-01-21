#include <iostream>
using namespace std;

int main(){
	
	float saldomedio, c0, c1, c2, c3, c4, c5;
	
	cin >> saldomedio;
	
	if (saldomedio < 0){
		c0= 0;
		cout << saldomedio << endl;
		cout << c0;
	    }else if(saldomedio >= 0 and saldomedio < 200){
		c1= (saldomedio) * 10/100;
		cout << saldomedio << endl;
		cout << c1;
		}else if(saldomedio >= 200 and saldomedio < 400){
		c2= (saldomedio) * 15/100;
		cout << saldomedio << endl;
		cout << c2;
		}else if(saldomedio >= 400 and saldomedio < 800){
		c3= (saldomedio) * 20/100;
		cout << saldomedio << endl;
		cout << c3;
		}else if(saldomedio >= 800 and saldomedio < 1600){
		c4= (saldomedio) * 25/100;
		cout << saldomedio << endl;
		cout << c4;
		}else if(saldomedio >= 1600){
		c5= (saldomedio) * 30/100;
		cout << saldomedio << endl;
		cout << c5;
		}
	
	return 0;
}
