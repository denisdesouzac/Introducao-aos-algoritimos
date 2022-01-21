# include <iostream>
using namespace std;

int femea(int N);
int macho(int N);

int main(){

	int t1, t2, t3, t4, t5, t6;

	cin >> t1;
	cin >> t2;
	cin >> t3;
	cin >> t4;
	cin >> t5;
	cin >> t6;


	cout << femea(t1) << " " << femea(t2) << " " << femea(t3) << " "; 
	cout << macho(t4) << " " << macho (t5) << " " <<  macho(t6);

    return 0;
}

int macho(int N){
	
	if(N == 0){
		return 0;
	}else if(N > 0){
		return N - femea(macho(N-1));
	}else{
		return 0;
	}
}

int femea(int N){
	
	if(N == 0){
		return 1;
	}else if(N > 0){
		return N - macho(femea(N-1));
	}else{
		return 0;
	}
}
