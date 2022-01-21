#include <iostream>
using namespace std;

int main(){
	
	double thanos, thor, e = 0, e2 = 0; 
	int golpes = 0;
	
	cin >> thanos;
	cin >> thor;
	
	while(thanos < thor){
		e = thanos - ((thanos * 2)/100);
		e2= thor - ((thor * 6)/100);
		thanos = e;
		thor = e2;
		golpes++;
		}
		
		cout << golpes;

	return 0;
}
