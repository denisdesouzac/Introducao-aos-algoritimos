#include <iostream>
using namespace std;

int main(){
	
	
	float area,bm, bn, altura;// bm= base maior e bn= base menor
	
	cin>> bm;
	cin>> bn;
	cin>> altura;
	
	area= ((bm + bn)* altura)/2;
	cout<< area;
	return 0; 
}
