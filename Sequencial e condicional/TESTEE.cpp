#include <iostream>
using namespace std;

int main(){
	
	float n1, n2, n3, n4;// n = número
	
	cin >> n1;
	cin >> n2;
	cin >> n3;
	cin >> n4;

	
	if((n1 and n2 > n3) and n3 > n4){
		cout << n4 << endl;
		cout << n3;
	}else if((n1 and n2 > n4) and n4 > n3){
		cout << n3 << endl;
		cout << n4;	
	}else if((n1 and n3 > n2) and n2 > n4){
		cout << n4 << endl;
		cout << n2;	
	}else if((n1 and n3 > n4) and n4 > n2){
		cout << n2 << endl;
		cout << n4;	
	}else if((n1 and n4 > n2) and n2 > n3){
		cout << n3 << endl;
		cout << n2;	
	}else if((n1 and n4 > n3) and n3 > n2){
		cout << n2 << endl;
		cout << n3;	
	}else if((n2 and n3 > n1) and n1 > n4){
		cout << n4 << endl;
		cout << n1;	
	}else if((n2 and n3 > n4) and n4 > n1){
		cout << n1 << endl;
		cout << n4;		
	}else if((n2 and n4 > n1) and n1 > n3){
		cout << n3 << endl;
		cout << n1;		
	}else if((n2 and n4 > n3) and n3 > n1){
		cout << n1 << endl;
		cout << n3;			
	}else if((n3 and n4 > n1) and n1 > n2){
		cout << n2 << endl;
		cout << n1;		
	}else if((n3 and n4 > n2) and n2 > n1){
		cout << n1 << endl;
		cout << n2;		
	}
	
	return 0;
}
