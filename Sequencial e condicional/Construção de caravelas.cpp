#include <iostream>
#include <math.h>
using namespace std;
int main(){
	
	int naus = 1000;// número mínimo de pessoas para embarcar nas 5 naus
	
	float qp , nc;// qp=quantidade de pessoas e nc= número de caravelas
	
	cin>> qp;
	
	nc= (qp - naus)/80; //nc= número de caravelas
	
	cout<< ceil(nc);


	return 0;
}
