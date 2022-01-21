#include <iostream>
using namespace std;

void preencher(int vetor[], int num);
int part_Hoare(int  A[],  int  lo,  int  hi);
void quicksort(int vetor[], int pos_pivo, int fim);

int main(){
	
	int num;
	cin >> num;
	
	int vetor[num];
	preencher(vetor, num);
	quicksort(vetor, 0, num);
	
	for(int i = 0; i < num; i++){
		cout << vetor[i] << " ";
	}
	
	return 0;
}

void preencher(int vetor[], int num){
	
	for(int i = 0; i < num; i++){
		cin >> vetor[i];
	}
}


int part_Hoare (int  A[],  int  lo,  int  hi){  // A[lo..hi]
	int  pivo = A[lo + (hi - lo) / 2];
	int  i = lo - 1; int  j = hi + 1;
	while(true){// laço infinito
		do  {
			i++;
		}while(A[i] < pivo);
		do{
			j--;
		}while(A[j] > pivo);
		 if(i >= j){
			return  j;
		}
		swap(A[i],A[j]);
	}// término do while
} 


void quicksort(int vetor[], int pos_pivo, int fim){
	int pos_novo_pivo;
	if (pos_pivo < fim) {
		pos_novo_pivo = part_Hoare(vetor, pos_pivo, fim);
		
		quicksort(vetor, pos_pivo, pos_novo_pivo);
		quicksort(vetor, pos_novo_pivo + 1, fim);
	}
}
