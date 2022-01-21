#include <iostream>
using namespace std;

int main(){
	
	/*picanha= 28,90
	alcatra= 19,90
	linguiça= 7,95
	espetinho vegetariano= 2,99
	sal= 1,50
	farinha= 1,85
	carvão= 8,70*/
	//^^ Valor do quilo
	int pi, al, lin, es, sal, far, car;
	float valorfinal1,valorfinal2,conta, desconto1, desconto2;
	
	cin>> pi;
	cin>> al;
	cin>> lin;
	cin>> es;
	cin>> sal;
	cin>> far;
	cin>> car;
	
	conta= (pi*28.90) + (al*19.90) + (lin*7.95) + (es*2.99) + (sal*1.50) + (far*1.85) + (car*8.70);
	
	desconto1= (conta*5)/100;
	desconto2= (conta*10)/100;
	
	valorfinal1= conta - desconto1;
	valorfinal2= conta - desconto2;
	
	if(conta <= 200){
		cout<<conta << endl<< desconto1<< endl << valorfinal1 << endl;
		} else if(conta > 200){
		cout<<conta << endl << desconto2 << endl << valorfinal2<< endl;	
			}

	return 0;
}
