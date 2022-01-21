#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	float c1,c2,hipotenusa,hi;// c1= cateto 1 e c2= cateto 2
	
	cin>> c1>> c2;
	
	hi= pow(c1,2) + pow(c2,2);
	
	hipotenusa= sqrt(hi);
	
	cout<< hipotenusa;
	
	return 0;
}
