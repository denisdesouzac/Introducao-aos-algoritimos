#include <iostream>
using namespace std;

int main(){
	
	int num, t, qb = 1, cont = 1;// qb = quantidade de bolinhas do triângulo/ t = total
	
	cin >> num;
	
	while(cont <= num){
		
		if(cont == 1){
			t = 1;
		}else{
			t = qb + cont;	
		}
		qb = t;	
		cont ++;
	}
	cout << t << endl;
	return 0;
}
