#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <set>
#include <array>
#include <map>

int main(){
    int n, m;
    cin >> n;
    int retorno = 1;
    vector<int> numeros(n);
    vector<int> indices(n + 1);
    for(int i = 0; i < n; i++){
        cin >> numeros[i];
    }
    for(int i = 0; i < n; i++){
        indices[numeros[i]] = i;
    }

    for(int i = 1; i < n; i++){
        if(indices[i] > indices[i + 1])
            retorno++;
    }
    cout << retorno;
}