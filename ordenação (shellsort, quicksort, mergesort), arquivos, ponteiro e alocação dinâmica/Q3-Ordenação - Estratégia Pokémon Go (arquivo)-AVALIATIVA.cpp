#include <iostream>
# include <fstream>
using namespace std;

struct pokemon{
	
	string nome;
	string tipo;
	int distancia;
	
};

void quickSort(pokemon v[], int esq, int dir);

int main(){
	
	ifstream dados("dados.txt");
	
	int q_pokemon;// Quantidade de pokemons do arquivo.
	
	dados >> q_pokemon;
	
	pokemon information[q_pokemon];
	
	//Estrutura que passa os dados do arquivo para um registro.
	for(int i = 0; i < q_pokemon; i++){
		dados >> information[i].nome;
		dados >> information[i].tipo;
		dados >> information[i].distancia;
	}
	
	string tipo_desejado;
	cin >> tipo_desejado;// Digite o tipo do pokemon desejado.
	int poke_desejados;
	cin >> poke_desejados;// Digite a quantidade do pokemon desejado.
	
	quickSort(information, 0, q_pokemon -1);// Ordene os registros.
	
	ofstream saida("pokemon.txt");// Arquivo de saida.
	
	int contador = 1;
	
	for(int i = 0; i < q_pokemon; i++){
		
		if(information[i].tipo == tipo_desejado and contador <= poke_desejados){
			saida << information[i].nome << "\n";// Colocar o nome do pokemon no arquivo.
			contador++;
		}
	}
	
	dados.close();// Fechar arquivo.
	saida.close();// Fechar arquivo.
	
	return 0;
}

// Função de ordenação.
void quickSort(pokemon v[], int esq, int dir){
	int i, j, pivo;
	pokemon aux;
	i = esq;
	j = dir;
	pivo = v[(esq+dir)/2].distancia;
	while(i <= j){
		while(v[i].distancia < pivo) {
			i++;
		}
		while(v[j].distancia > pivo) {
			j--;
		}
		if (i <= j){
			aux = v[i];
			v[i] = v[j];
			v[j] = aux;
			i++;
			j--;
		}
	}
	
	if(esq < j){
		quickSort(v, esq, j);
	}
	if (i < dir) {
		quickSort(v, i, dir);
	}
}
