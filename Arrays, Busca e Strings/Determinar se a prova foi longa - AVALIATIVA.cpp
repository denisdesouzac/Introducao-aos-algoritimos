#include <iostream>
using namespace std;

void preencher(int horas[], int minutos[], int& tamanho);

void consultar(int horas[], int minutos[], int tamanho, int hora_consulta, int minuto_consulta, int& n_estudantes);

void setenta(int horas[], int minutos[], int tamanho);

void p_alunos(int tamanho, int n_estudantes);

int main(){

	int tamanho = 100;
	int horas[tamanho];
	int minutos[tamanho];

	preencher(horas, minutos, tamanho);

	//Digite horário de consulta:
	int hora_consulta, minuto_consulta;
	cin >> hora_consulta >> minuto_consulta;

	int n_estudantes = 0;// contador

	consultar(horas,  minutos, tamanho, hora_consulta, minuto_consulta, n_estudantes);

	setenta(horas, minutos, tamanho);

	p_alunos(tamanho, n_estudantes);
	
	return 0;
}

// Função que irá preencher as horas e os minutos no vetores até colocar um número negativo;
void preencher(int horas[], int minutos[], int& tamanho){

	int h = 0;
	int min;
	int i = 0;

	while( h >= 0 and i < tamanho ){
		cin >> h;
		if(h >= 0){
			cin >> min;
			horas[i] = h;
			minutos[i] = min;
		}
		i++;
	}
	
	tamanho = i - 1;
	
}

// Função que irá comparar o horário de consulta e contar o número de estudantes até lá.
void consultar(int horas[], int minutos[], int tamanho, int hora_consulta, int minuto_consulta, int& n_estudantes){

	int i = 0;
	
	while( i < tamanho){
		
		if(horas[i] <= hora_consulta){
			
			if(horas[i] == hora_consulta){
				
				if(minutos[i] == minuto_consulta){
					n_estudantes ++;
					i = tamanho;
				}else if(minutos[i] > minuto_consulta){
					i = tamanho;
				}else if(minutos[i] < minuto_consulta){
					n_estudantes ++;
				}
			}else{
				n_estudantes++;
			}
		}
		i++;
	}
}

// Função que calcula o horário que 70% dos alunos entregaram a prova.
void setenta(int horas[], int minutos[], int tamanho){

	int porcentagem;

	porcentagem = (tamanho * 70)/ 100;

	cout << horas[porcentagem] << ":" << minutos[porcentagem] << "\n";

}

// Função que calcula a porcentagem de alunos que entregou a prova.
void p_alunos(int tamanho, int n_estudantes){

	float porcentagem;

	porcentagem = (n_estudantes * 100.00) / tamanho;

	cout << porcentagem;
}
