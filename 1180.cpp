#include <iomanip>
#include <iostream>
#include <cmath>
#include <climits>


using namespace std;

int main() {
    int min = INT_MAX;
    int i, x, y, p, N;
    cin >> N;
    int X[N];
    for (i=0; i<N; i++) {
        cin >> X[i];
    }
    for (i=0; i<N; i++) {
        if (X[i] < min) {
            min = X[i];
            p = i;
        }
    }
    cout << "Menor valor: " << min << endl;
    cout << "Posicao: " << p << endl;
}