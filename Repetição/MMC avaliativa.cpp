#include <iostream>
using namespace std;

int main(){
	
	int num1, num2, d = 2, r = 1,mmc; // d= divisor / r= resultado
	
	cin >> num1 >> num2;
	
	
    while (num1 + num2 != 2){
			
		if (num1 == 0 or num2 == 0){
			mmc = 0;
			break;
		}
		if((num1 % d == 0) or (num2 % d == 0)){
			
			if( num1 % d == 0){
				num1= num1/d;
			}
			if(num2 % d == 0){
				num2= num2/d;
			}
			r = r * d;
			mmc = r;
		}else{
			d++;
		}
	}
	cout << mmc;
	
	return 0;
}
