#include <iostream>
using namespace std;

int main(){
	
	float valor,op1,op2,op3;
	char moeda;
	
	/*D= 3.26;
	E= 3.88;
	P= 0.19;*/
	
	cin>> valor;
	cin>> moeda;
	//op=operação
	op1= valor/3.26;
	op2= valor/3.88;
	op3= valor/0.19;
	
	if(moeda == 'D'){
		cout<< op1;
	} else if(moeda == 'E'){
		cout<< op2;
	} else if(moeda == 'P'){
		cout<< op3;
	}		
	
 

	return 0;
}
