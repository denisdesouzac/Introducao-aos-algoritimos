#include <iostream>
using namespace std;

int main(){
	
	char sexo;// masculino ou feminino
	float h, p1, p2;// h=altura
	
	cin>> sexo;
	cin>> h;
	
	p1= (72.7 * h) - 58;
	p2= (62.1 * h) - 44.7;
	
	if(sexo == 'M'){
		cout<< p1;
		}else if(sexo == 'F'){
			cout<< p2;
		}
	
	return 0;
}
