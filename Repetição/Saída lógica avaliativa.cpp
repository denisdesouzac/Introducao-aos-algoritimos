#include <iostream>
using namespace std;

int main(){
	
	int divisor, num = 0, quociente;
	
	cin >> divisor;
	
	while (num % divisor != 2){
		cin >> num;
		quociente = num / divisor;
		}
		
	cout << quociente;

	return 0;
}
