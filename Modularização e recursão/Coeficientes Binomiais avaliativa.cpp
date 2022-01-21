# include <iostream>
using namespace std;

int C(int N, int K);

int main (){

    int N, K;

    cin >> N;
    cin >> K;

    cout << C(N,K);

    return 0;
}

int C(int N, int K){

    if(K == 0){

        return 1;
    }else if(K == N){

        return 1;
    }else{

        return C(N-1, K-1) + C(N-1, K);
    }
   
}