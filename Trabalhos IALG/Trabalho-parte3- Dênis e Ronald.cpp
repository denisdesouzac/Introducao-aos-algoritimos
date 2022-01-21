#include <iostream>
#include <fstream>
using namespace std;
/*
*Nomes: Dênis de Souza Cordeiro
		Ronald de Souza Galdino
		
*Matrículas: 202110235
			 202110679
			(Respectivamente)
*Turma: 14A

*Tema do trabalho: Países
 
* O programa está ordenando os dados do registro pela população.
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
  	cout<<"5-Excluir um item"<<endl;
	cout<<"6-sair"<<endl << endl;
}

//Menu de pesquisa.
void menu2(){
	cout<<"1-Pesquisar pela população"<<endl;
	cout<<"2-Pesquisar pelo nome do país"<<endl << endl;
}

// Menu de alteração.
void menu3(){
	cout<<"1-País"<<endl;
	cout<<"2-Quantidade populacional"<<endl;
	cout<<"3-Idioma falado"<<endl;
	cout<<"4-Descrição"<<endl << endl;
}

// Menu de arquvos
void menu4(){
	cout<<"1-sim"<<endl;
	cout<<"2-Não"<<endl;
}

// Função que irá fazer o cadastro.
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

// Função que faz a ordenação por Selectin_Sort.
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

// Função que irá listar todos os dados inseridos.
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

// Função que realizará uma busca por número populacional(Busca binária).
int pesquisar1(dados_paises vetor_paises[], int tam, long long busca){
	int meio,pos_inicial=0,pos_final=tam-1;
	
	while(pos_inicial<=pos_final){
		meio=(pos_inicial+pos_final)/2;
		if(busca==vetor_paises[meio].populacao){
			return meio;
		}
		else if(busca>vetor_paises[meio].populacao){
			pos_inicial=meio+1;
		}
		else{
			pos_final = meio-1;
		}
	}
	return -1;
}

// Função que realizará uma busca por nome do país(Busca sequencial).
int pesquisar2(dados_paises vetor_paises[], int tam, string pais_busca){

	for(int i = 0; i < tam; i++){
		if(vetor_paises[i].nome == pais_busca){
			return i;
		}
	}
	return -1;
}

// Função que irá alterar um dado do registro.
void alterar(dados_paises vetor_paises[],int num, int posicao){
  
	string alteracao;
  
	long long altera_populacao;

	bool alterou= false;// Controle de alteração.

	if(num==1){// Se a alteração for no nome...
		
		cout<<"Insira o novo nome do país"<<endl<<endl;
		
		cin.ignore();
		getline(cin,alteracao);
		
		vetor_paises[posicao].nome =alteracao;
		
		alterou=true;
	}
	else if(num==2){// Se a alteração for no número populacional...
		
		cout<<"Insira o novo número populacional"<<endl<<endl;
		
		cin >> altera_populacao;
		
		vetor_paises[posicao].populacao = altera_populacao;
		
		alterou = true;
	}
	else if(num==3){// Se a alteração for no idioma...
		
		cout<<"Insira o novo idioma falado"<<endl<<endl;
		
		cin.ignore();
		getline(cin,alteracao);
		
		vetor_paises[posicao].idioma=alteracao;
		
		alterou=true;
	}
	else if(num==4){// Se a alteração for na descrição...
		
		cout<<"Insira a nova descrição do país"<<endl<<endl;
		
		cin.ignore();
		getline(cin,alteracao);
		
		vetor_paises[posicao].descricao = alteracao;
		
		alterou=true;
	}

	if(alterou == true){
		cout << endl << "Alteração realizada com sucesso!"<< endl << endl;
	}
}

// Função que irá excluir um dado desejado.    NOVA*
void excluir (dados_paises vetor[], int tam, int pos){
  
	for(int i=pos; i < tam-1; i++){
		vetor[i] = vetor[i+1];
	}
}

// Função de ordenação por Identificador.        NOVA*
void shell_sort(dados_paises vet[], int tam) {
	
	int gaps[9] = {1, 4, 10, 23, 57, 132, 301, 701, 1750};
	int pos_gap = 8;
	while (gaps[pos_gap] > tam) {
		pos_gap--;
	}
	dados_paises value;
	int x;
	
	while ( pos_gap >= 0 ) {
		int gap = gaps[pos_gap];
		for (int i = gap; i < tam; i++) {
			value = vet[i];
			x = i;
			while ((x >= gap) and (value.id < vet[x - gap].id)) {
				vet[x] = vet[x - gap];
				x = x - gap;
			}
			vet[x] = value;
		}
		pos_gap--;
	}
}

// Função que irá gravar os dados do registro em um arquivo.    NOVA*
void grava_arquivo (dados_paises vetor_paises[], int tam){

	ofstream arquivo("boletim_internacional.txt");

	for(int x = 1; x < tam ; x++){
		arquivo << vetor_paises[x].id << endl;
		arquivo << vetor_paises[x].nome << endl;
		arquivo << vetor_paises[x].populacao << endl;
		arquivo << vetor_paises[x].idioma << endl;
		arquivo << vetor_paises[x].descricao << endl << endl;
	}

	arquivo.close();
	cout << endl << "Arquivado com sucesso!" << endl;

}

//                       **   FUNÇÃO PRINCIPAL  **
int main(){
	
	dados_paises vetor_paises[100];
	
	int procedimento,cont=1,num,posicao;

	long long num_busca;
	
	string pais_busca,idioma_busca;

	do{
		cout<<"Qual procedimento deseja realizar?"<<endl;
		
		menu();
		
		cin>>procedimento;
		
		 //Procedimento 1 do Menu Principal.
		if(procedimento == 1){
		
			if (cont <= 100){
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
		//Procedimento 2 do Menu Principal.
		else if(procedimento == 2){
			listar(vetor_paises,cont);
		}
		//Procedimento 3 do Menu Principal.
		else if(procedimento == 3){
			cout<<"Por qual campo deseja buscar?"<<endl;
			menu2();
			cin>>num;
			if(num == 1){// Se a pesquisa for pelo número populacional...

				cout<<endl<<"Insira um número populacional para a busca"<<endl;
				cin>>num_busca;
				posicao=pesquisar1(vetor_paises,cont,num_busca);

				if(posicao != -1){//Se o registro de busca for encontrado...
						
					cout << endl;
					cout <<"Identificador" <<':'<<" "<< vetor_paises[posicao].id << endl;
					cout <<"País" <<':'<<" "<<vetor_paises[posicao].nome << endl;
					cout << "Quantidade populacional" <<':'<<" "
						 <<vetor_paises[posicao].populacao << endl;
					cout << "Idioma falado" <<':'<<" " <<vetor_paises[posicao].idioma << endl;
					cout << "Descrição:"<<vetor_paises[posicao].descricao << endl;
					cout << endl;
				}
				else if(posicao == -1){// Se o registro de busca não for encontrado...
						
					cout << endl << "Não foi encontrado um país com essa população."<<endl<<endl;
				}
			}
			else if (num == 2){// Se a pesquisa for pelo nome do país...

				cout << endl << "Qual país você deseja pesquisar?" << endl;
				cin.ignore();
				getline(cin,pais_busca);
				posicao=pesquisar2(vetor_paises, cont, pais_busca);

				if(posicao!=-1){//Se o registro de busca for encontrado...
					
					cout << endl;
					cout <<"Identificador" <<':'<<" "<< vetor_paises[posicao].id << endl;
					cout <<"País" <<':'<<" "<<vetor_paises[posicao].nome << endl;
					cout << "Quantidade populacional" <<':'<<" "
						 <<vetor_paises[posicao].populacao << endl;
					cout << "Idioma falado" <<':'<<" " <<vetor_paises[posicao].idioma << endl;
					cout << "Descrição:"<<vetor_paises[posicao].descricao << endl;
					cout << endl;
				}
				else if(posicao==-1){// Se o registro de busca não for encontrado.
					
					cout<< endl << "Não foi encontrado um país com esse nome"; 
					cout<< endl << endl;
				}
			}
		}	
		//Procedimento 4 do Menu Principal.
		else if(procedimento==4){

			cout<<"Os dados de qual país você deseja alterar?"<<endl<<endl;
			
			cin.ignore();
			getline(cin,pais_busca);
			
			posicao=pesquisar2(vetor_paises, cont, pais_busca);

			if(posicao!=-1){//Se o registro a ser alterado for encontrado...
				
				cout<<"qual campo deseja alterar?"<<endl<<endl;
				
				menu3();
				
				cin>>num;
				
				alterar(vetor_paises,num,posicao);
			}
			else if(posicao==-1){//Se o registro a ser alterado não for encontrado...
				
				cout<< endl << "Não foi encontrado um país com esse nome"; 
				cout<< endl << endl;
			}
		}
		// Procedimento 5 do Menu Principal.
		else if(procedimento == 5){

			cout << endl << "Os dados de qual país você deseja excluir?" << endl;
			cin.ignore();
			getline(cin,pais_busca);
			posicao=pesquisar2(vetor_paises, cont, pais_busca);
			if(posicao!=-1){
				excluir(vetor_paises, cont ,posicao);
				cont--;
				cout << endl << "Excluído com sucesso!" << endl << endl;
			}
			else{
				cout << endl << "Não foi encontrado um país com esse nome."<<endl << endl;
			}
		}
		// Procedimento 6 do Menu Principal.
		else if(procedimento == 6){
			cout << endl << "Você deseja gravar os dados em um arquivo?" << endl;
			menu4();
			cin >> num;
			if (num == 1){// Se o usuário quiser arquivar...

				shell_sort(vetor_paises,cont);

				grava_arquivo(vetor_paises,cont);

				procedimento++;
			}
			else if (num == 2){// Caso contrário...
				procedimento++;// Encerra.
			}
		}

		selection_sort(vetor_paises,cont-1);// Ordenação
		
	}while(procedimento != 7);//Se o procedimento for "7" encerra o programa.
	
	return 0;
}