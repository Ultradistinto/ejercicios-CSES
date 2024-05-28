#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <set>
#include <array>
#include <map>
#include <cmath>
#include <climits>

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> soluciones(m + 1, 0);
    soluciones[0] = 1;
    vector<int> monedas(n);
    for(int i = 0; i < n; i++){
        cin >> monedas[i]; 
    }
    int e = 1e9 + 7;
    for (auto moneda : monedas) {
        for(int i = moneda; i <= m; i++){
            soluciones[i] += soluciones[i - moneda];
            soluciones[i]%=e;
        }
    }
    cout << soluciones[m];
}
