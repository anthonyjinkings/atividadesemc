#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
 
int main() {
 
    int n, aux=0, pos=0, x=0, i;
    cin >> n;
    int v[n];
    for (i=0;i<n;i++) {
        cin >> v[i];
    }
    for(i=0;i<n;i++) {
        if(v[i]<aux){
            pos=1+i;
            i+=n;
        }
        aux=v[x];
        x++;
    }
    cout << pos << endl;
}