#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	float x1,y1,x2,y2,dis,resultado; //coordenadas dos pontos e dis= distância entre os pontos
	
	cin>> x1;
	cin>> y1;
	cin>> x2;
	cin>> y2;
	
	dis= pow((x2-x1),2) + pow((y2-y1),2);
	resultado = sqrt(dis);
	
	cout<< resultado;

	return 0;
}
