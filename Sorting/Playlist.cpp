#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <set>
#include <array>
#include <map>


int main(){
    int n;
    cin >> n;
    map<long, long> frecuencia;
    vector<int> canciones(n);
    int retorno = 0;
    for(int i = 0; i < n; i++){
        cin >> canciones[i];
    }
    for(int i = 0, j = 0; i < n; i++){
        while(j < n && frecuencia[canciones[j]] < 1){
            frecuencia[canciones[j]]++;
            j++;
        }
        retorno = max(j - i, retorno);
        frecuencia[canciones[i]]--;
    } 

    cout << retorno;
}