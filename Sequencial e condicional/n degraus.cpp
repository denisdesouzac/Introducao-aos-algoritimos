#include <iostream>
#include <math.h>
using namespace std;
int main(){
	float a_c, a_d, degraus;//a_c= altura em centímetros/ a_d =altura desejada
	
	cin>> a_c;
	cin>> a_d;
	
	degraus= (a_d*100)/ a_c;
	
	cout<< ceil(degraus);


	return 0;
}
