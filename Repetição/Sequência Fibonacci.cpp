#include <iostream>
using namespace std;

int main(){
	
	int num, cont = 1, fib, fib1,fib2;
	
	cin >> num;
	
	while(cont <= num){
	
	if(cont == 1){
		fib1 = 0;
		cout << fib1 << endl;
	}else if(cont == 2){
		fib2 = 1;
		cout << fib2 << endl;
	}else{
		fib = fib2 + fib1;
		cout << fib << endl;
		fib1 = fib2;
		fib2 = fib;
		}
	
	cont++;
	}
	
	return 0;
}
