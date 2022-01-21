#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
	
	float vx, vy, op1, op2, op3, op4;// vx= valor de x e vy= valor de y
	
	cin>> vx;
	cin>> vy;
	
	if(vx >= 0 and vy >=0){
		op1= vx/vy;
		cout<< setprecision(1);
		cout<< op1;
	}else if(vx < 0 and vy >= 0){
		op2= vx * vy;
		cout<< op2;
	}else if(vx < 0 and vy < 0){
		op3= vx + vy;
		cout<< op3;		
	}else if(vx >= 0 and vy <0){
		op4= pow(vx,vy);
		cout<< op4;		
		}
	 
	
	return 0;
}
