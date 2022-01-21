#include <iostream>
using namespace std;

int main(){
	
	float nota,mat,cn,lin,re,ch;//mat= matemática/cn=ciência da natureza/lin=linguagens/re=redação/ch=ciências humanas.
	
	cin>> mat;
	cin>> cn;
	cin>> lin;
	cin>> re;
	cin>> ch;
	
	nota= ((mat*3) + (cn*2) + (lin*2) + (re*2) + (ch*1))/10;
	
	if (re < 200){
		cout<< -1;
		} else{
			cout<< nota;
			}
 

	return 0;
}
