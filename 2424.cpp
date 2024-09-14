#include <iostream>

using namespace std;

#define x 1000
#define j 1000

int main(){
    int v[x], i, n[j];
    for (i=0; i<1; i++) {
        cin >> v[x];
    }
    for (i=0; i<1; i++) {
        cin >> n[j];
    }
    if (v[x] <= 432 && v[x] >= 0 && n[j] <= 468 && n[j] >= 0) {
        cout << "dentro" << endl;
    }
    else {
        cout << "fora" << endl;
    }

}