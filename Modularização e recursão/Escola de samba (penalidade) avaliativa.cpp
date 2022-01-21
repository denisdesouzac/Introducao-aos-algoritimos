# include <iostream>
using namespace std;

int tempo(int N, int N2, int N3, int N4);
void penalidade(int N);

int main(){

    string escola;// Nome da escola de samba.
    int horasE;// Horas de entrada.
    int minutosE;// Minutos de entrada.
    int horasS;// Horas de saída.
    int minutosS;// Minutos de saída.
    int tempototal;// Tempo de duração total em minutos.

    
    getline(cin, escola);

    while(escola != "fim"){

        cin >> horasE >> minutosE;
        cin >> horasS >> minutosS;

        tempototal = tempo(horasE, minutosE, horasS, minutosS);
        
        penalidade(tempototal);

        cin.ignore();
        getline(cin, escola);
    
    }
    return 0;
}
// Função que calcula o tempo de duração do desfile em minutos
int tempo(int N, int N2, int N3, int N4){

    int tmE;// Tempo em minutos da entrada.
    int tmS;// Tempo em minutos da saída.
    if(N3 == 0){
        N3 = 24;
    }

    tmE = (60 * N) + N2;
    tmS = (60 * N3) + N4;

    return tmS - tmE;
}
// Função que calcula a penalidade de acordo com o tempo.
void penalidade(int N){

    float pen;// Penalidade

    if(N < 55){// Se o tempo for menor que 55.
        pen = ( 55 - N ) * 0.1;

        if (pen < 0){
            pen = pen * (-1);
        }
        cout << pen << endl;

    }else if( N > 65 ){// Se o tempo for maior que 65.
        pen = ( 65 - N ) * 0.1;

        if (pen < 0){
            pen = pen * (-1);
        }
        cout << pen << endl;

    }else if( N >= 55 and N <= 65 ){// Se o tempo do desfile estiver entre 55 e 65 não há penalidade.
        pen = 0.0;
        cout << pen << endl;
    }

}