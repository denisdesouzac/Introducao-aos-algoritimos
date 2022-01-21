#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	
	float sm,op1,op2,op3,op4;//sm= saldo médio
	
	cin>> sm;
	
	if(sm > 400.00){
		op1= sm*30/100;
		cout<< setprecision(2)<< fixed;
		cout<< op1;
	}else if(sm>300.00 and sm<=400.00){
		op2= sm*25/100;
		cout<< setprecision(2)<< fixed;
		cout<< op2;
	}else if(sm>200.00 and sm<=300.00){
		op3= sm*20/100;
		cout<< setprecision(2)<< fixed;
		cout<< op3;
	}else if(sm <= 200.00){
		op4= sm*10/100;
		cout<< setprecision(2)<< fixed;
		cout<< op4;
	}
	
	 
	
	return 0;
}
