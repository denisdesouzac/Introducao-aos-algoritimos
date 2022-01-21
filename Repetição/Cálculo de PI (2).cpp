#include <iostream>
#include <cmath>
using namespace std;

int main(){

	double num, cont, mult = 1;
	double x , v, pi;
	
	cont = 1;
	
	cin >> num;
	
	x = 2;
	
	while(cont <= num){
	
	v = sqrt(x);
	mult *= v/2;
	x += v;
			
	cont++;	
	}
	
	pi = 2 / mult;
	cout << pi;


    return 0;
}
