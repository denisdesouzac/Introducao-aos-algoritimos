#include <iostream>
#include <cmath>
using namespace std;

struct registro_pizaria{
	
	string nome;
	int coordenada_x;
	int coordenada_y;
	float preco_pizza;
	float distancia;
};

void preencher(registro_pizaria lista[], int total_clientes);
void distanciamento(int total_clientes, int cXpizzaria, int cYpizzaria, registro_pizaria lista[]);
void insertion_sort(registro_pizaria lista[], int tam);
void imprimir(int atendidos, registro_pizaria lista[]);

int main(){
	
	int atendidos, cXpizzaria, cYpizzaria, total_clientes;
	
	cin >> atendidos;// Número de atendidos.
	cin >> cXpizzaria;// Coordenada X da pizzaria.
	cin >> cYpizzaria;// Coordenada Y da pizzaria.
	cin >> total_clientes;// Número total de clientes.
	
	registro_pizaria lista[total_clientes];
	
	preencher(lista, total_clientes);
	distanciamento(total_clientes, cXpizzaria, cYpizzaria, lista);
	insertion_sort(lista, total_clientes);
	imprimir(atendidos, lista);
	
	return 0;
}

// Função que preencherá os dados dos clientes da pizzaria.
void preencher(registro_pizaria lista[], int total_clientes){
	
	for(int i = 0; i < total_clientes; i++){
		cin >> lista[i].nome;
		cin >> lista[i].coordenada_x;
		cin >> lista[i].coordenada_y;
		cin >> lista[i].preco_pizza;
	}
	
}

// Função que irá calcular a distância da pizzaria ao cliente.
void distanciamento(int total_clientes, int cXpizzaria, int cYpizzaria, registro_pizaria lista[]){
	
	float quao_longe;
	
	for(int i = 0; i < total_clientes; i++){
		quao_longe = sqrt( pow( cXpizzaria - lista[i].coordenada_x, 2 ) + pow( cYpizzaria - lista[i].coordenada_y, 2 ));
	
		lista[i].distancia = quao_longe;
	}
}

//Função que irá ordenar os registros pela distância.
void insertion_sort(registro_pizaria lista[], int tam){
	
	int valor_pivo, j;
	registro_pizaria pivo2;
	
	for (int i = 1; i < tam; i++) {
		valor_pivo = lista[i].distancia;
		pivo2 = lista[i];
		j = i - 1;
		while ((j >= 0) and (valor_pivo < lista[j].distancia)){
			lista[j+1] = lista[j];
			j--;
		}
		lista[j+1].distancia = valor_pivo;
		lista[j+1] = pivo2;
	}
}

// Função que irá imprimir o valor das pizzas dos clientes atendidos;
void imprimir(int atendidos, registro_pizaria lista[]){
	
	float valor_pizzas = 0.0;
	
	for(int i = 0; i < atendidos; i++){
		
		valor_pizzas += lista[i].preco_pizza;
		
	}
	
	cout << valor_pizzas << "\n";
}


