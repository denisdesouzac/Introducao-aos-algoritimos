#include <iostream>
using namespace std;
/*
*Nomes: Dênis de Souza Cordeiro
		Ronald de Souza Galdino
		
*Matrículas:
	202110235
	202110679
	
*Turma: 14A

*Tema do trabalho: Países
*/
struct dados_paises{
	int id;
	long long populacao;
	string nome,idioma,descricao;
};

// Menu Principal.
void menu (){
	cout<<"1-cadastrar"<<endl;
	cout<<"2-Listar todos"<<endl;
	cout<<"3-Pesquisar um país"<<endl;
	cout<<"4-Alterar um país"<<endl;
	cout<<"5-sair"<<endl;
}

void menu2(){
	cout<<"1-Pesquisar pela população"<<endl;
	cout<<"2-Pesquisar pelo nome do país"<<endl;
}

void cadastrar (dados_paises vetor_paises[], int tam){

	int i=tam-1;

	vetor_paises[i].id=tam;

	cout<<"Digite o nome do pais"<<endl;

	cin.ignore();
	getline(cin,vetor_paises[i].nome);
	
	cout<<"Digite a quantidade populacional"<<endl;
	cin >> vetor_paises[i].populacao;
	
	cout<<"Digite o idioma do país"<<endl;
	cin>>vetor_paises[i].idioma;
	
	cout<<"Descreva esse país"<<endl;
	cin.ignore();
	getline(cin,vetor_paises[i].descricao);

}

void selection_sort( dados_paises vetor_paises[], int tam){

	int posMenor = 0;
	dados_paises aux;
	
	for (int i=0; i < tam-1 ; i++) {
		posMenor = i;
		for (int j=i+1; j < tam; j++) {
			if (vetor_paises[j].populacao < vetor_paises[posMenor].populacao){
				posMenor = j;
			}
		}
		aux = vetor_paises[i];
		vetor_paises[i] = vetor_paises[posMenor];
		vetor_paises[posMenor] = aux;
	}
		
}

void listar (dados_paises vetor_paises[],int tam){

	cout<<endl;

	for(int i = 0; i < tam - 1; i++){

		cout << "Identificador" <<':'<<" "<<vetor_paises[i].id << endl;
		cout << "País"<<':'<<" " << vetor_paises[i].nome << endl;
		cout << "Quantidade populacional" <<':'<<" "
			 <<  vetor_paises[i].populacao << endl;
		cout << "Idioma falado" <<':'<<" "<< vetor_paises[i].idioma << endl;
		cout << "Descrição" <<':'<<" "<< vetor_paises[i].descricao << endl;
		cout << endl;
	}
}


void pesquisar1(dados_paises vetor_paises[], int tam, long long busca){
	int meio,pos_inicial=0,pos_final=tam-1;

	bool encontrado = false;
	
	while(pos_inicial<=pos_final){
		meio=(pos_inicial+pos_final)/2;
		if(busca==vetor_paises[meio].populacao){
			cout << endl;
			cout <<"Identificador" <<':'<<" "<< vetor_paises[meio].id << endl;
			cout <<"País" <<':'<<" "<<vetor_paises[meio].nome << endl;
			cout << "Quantidade populacional" <<':'<<" "
				 <<vetor_paises[meio].populacao << endl;
			cout << "Idioma falado" <<':'<<" " <<vetor_paises[meio].idioma << endl;
			cout << "Descrição:"<<vetor_paises[meio].descricao << endl;
			cout << endl;
			encontrado=true;
			pos_inicial = pos_final + 1;
		}
		else if(busca>vetor_paises[meio].populacao){
			pos_inicial=meio+1;
		}
		else{
			pos_final = meio-1;
		}
	}
	if(encontrado == false){
		cout << endl << "Não foi encontrado um país com essa população."<<endl<<endl;
	}
}

void pesquisar2(dados_paises vetor_paises[], int tam, string pais_busca){

	bool encontrado = false;

	for(int i = 0; i < tam; i++){
	
	if(vetor_paises[i].nome == pais_busca){
		cout << endl;
		cout <<"Identificador" <<':'<<" "<< vetor_paises[i].id << endl;
		cout <<"País" <<':'<<" "<<vetor_paises[i].nome << endl;
		cout << "Quantidade populacional" <<':'<<" "
			 <<vetor_paises[i].populacao << endl;
		cout << "Idioma falado" <<':'<<" " <<vetor_paises[i].idioma << endl;
		cout << "Descrição:"<<vetor_paises[i].descricao << endl;
		cout << endl;
		encontrado = true;
	}
	}

	if(encontrado == false){
		cout<< endl << "Não foi encontrado um país com essa população."<< endl;
	}
}

int main(){
	
	dados_paises vetor_paises[100];
	
	int procedimento,cont=1,num;

	long long num_busca;
	
	string pais_busca;

	
	do{
		cout<<"Qual procedimento deseja realizar?"<<endl;
		menu();
		cin>>procedimento;
		
		if(procedimento==1){
		
			if (cont<=100){
				cadastrar(vetor_paises,cont++);
				cout << endl;
				cout << "Cadastrado com sucesso!" << endl << endl;
			}
			else{
				cout << endl;
				cout <<"Não foi possível cadastrar! A capacidade máxima foi atingida."
				<< endl << endl;
			}
		}
		else if(procedimento==2){
			listar(vetor_paises,cont);
		}
		else if(procedimento==3){
			cout<<"Por qual campo deseja buscar?"<<endl;
			menu2();
			cin>>num;
		if(num==1){
			cout<<endl<<"Insira um número populacional para a busca"<<endl;
			cin>>num_busca;
			pesquisar1(vetor_paises,cont,num_busca);
		}else if (num==2){

			cout << endl << "Qual país você deseja pesquisar?" << endl;
			cin.ignore();
			getline(cin,pais_busca);
			pesquisar2(vetor_paises, cont, pais_busca);
		}
		}/*
		else if(procedimento==4){
			alterar(vetor_paises,cont);
		}*/
		selection_sort(vetor_paises,cont-1);
		
	}while(procedimento!=5);
	
	return 0;
}
