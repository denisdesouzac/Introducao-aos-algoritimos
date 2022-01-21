#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	float v, c;// v = velocidade /c = comprimento da marca de derrapagem
	
	cin >> c;
	
	v = 14.6 * sqrt(c);
	
	cout << v;
	
	return 0;
}
