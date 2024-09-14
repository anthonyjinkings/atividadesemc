#include <iostream>
#include <iomanip>
#include <string>

#define N 12

using namespace std;

int main(){
    float M[N][N], soma=0, media;
    char op;
    int i, j, k;
    cin >> k;
    cin >> op;
    for (i=0; i<N; i++){
        for (j=0; j<N; j++) {
            cin >> M[i][j];
        }
    }
    for (i=0; i<N; i++) {
        soma += M[i][k];
    }
    if (op == 'S') {
        cout << soma << endl;
    }
    else {
        media = soma/N;
        cout << fixed << setprecision(1) << media << endl;
    }
}