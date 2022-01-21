#include <iostream>
using namespace std;

int main(){
	
	int contA =0, contB = 0, contTotal=0;
	char c;// c= numero de caracteres
	
	while( contTotal <10){ 
		if(c == 'a'){
			++contA;
		}else if (c == 'b'){	
			++contB;	
		}
		contTotal++;
		cin >> c;
		}
		
	if(contA < contB){
		cout << 1;
		}else{
		cout << 0;	
		}
			

	return 0;
}
