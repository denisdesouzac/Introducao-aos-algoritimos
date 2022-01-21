# include <iostream>
using namespace std;

void parcelas(int N);

int main(){
	
	int numP;// numP se refere ao numero de parcelas que deseja calcular
	
	cin >> numP;// Escreva a quantidade de parcelas.
	
	parcelas(numP);// Aplica a função "parcela" que foi criada em numP.
	
	return 0;
}

// Função que vai calcular o valor das parcelas.
void parcelas(int N){
	double S = 0, n = 1, formula;
	// "S" é soma.
	// "n" é o contador de parcelas.
	// "formula" irá fazer o cálculo.
	
	while(n <= N){
		formula = (n*(n+1))/(n+3);// fórmula que calcula o valor de cada parcela.
		S += formula;// S irá somar os valores das parcelas(acumulador).
		n++;
	}
		
	cout << S;// leia o valor da soma.
}
