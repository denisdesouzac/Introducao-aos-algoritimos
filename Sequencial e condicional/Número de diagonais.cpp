#include <iostream>
using namespace std;

int main (){
	
	int n, diag; // n é o número de lados do polígono e diag é o número de diagonais.
	
	cin>> n;
	
	diag= (n * (n - 3)) / 2;
	
	cout<< diag;
	


return 0;
}
