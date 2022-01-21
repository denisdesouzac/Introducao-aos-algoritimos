#include <iostream>
using namespace std;

string mes(int N, string& m);

int main(){

	int num;// Número do mês desejado.
	string m;// m = mês
	
	cin >> num;// Digite o valor desejado

	mes(num, m);// Função mês aplicada ao número.
	
	cout << m;// Imprima o mês

	return 0;
}

// Função que irá calcular o mês.
string mes(int N, string& m){
	
	if (N == 1){
		return m = "janeiro";
	}else if (N == 2){
		return m = "fevereiro";
	}else if (N == 3){
		return m = "marco";
	}else if (N == 4){
		return m = "abril";
	}else if (N == 5){
		return m = "maio";
	}else if (N == 6){
		return m = "junho";
	}else if (N == 7){
		return m = "julho";
	}else if (N == 8){
		return m = "agosto";
	}else if (N == 9){
		return m = "setembro";
	}else if (N == 10){
		return m = "outubro";
	}else if (N == 11){
		return m = "novembro";
	}else if (N == 12){
		return m = "dezembro";
	}else{
		return m = "erro";// Caso não seja um  número entre 1 e 12, retorne erro.
	}	
}
