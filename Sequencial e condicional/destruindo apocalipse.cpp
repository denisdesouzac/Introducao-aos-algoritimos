#include <iostream>
using namespace std;
int main(){
	
	int eta,tl,ns,q ; //eta= energia total do apocalipse/ tl= tempo de luta em minutos/ns= numero de socos/ q = quantidade de energia que sobrou
	
	cin>> eta;
	cin>> tl;
	
	ns= ((60*tl)/5)*10;
	q= eta - (ns* 12);
	
	cout<< ns << endl << q << endl;
	
	return 0;
}
