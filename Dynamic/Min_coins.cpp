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
    vector<int> soluciones(m + 1, INT_MAX);
    soluciones[0] = 0;
    vector<int> monedas(n);
    for(int i = 0; i < n; i++){
        cin >> monedas[i]; 
    }
    for(int i = 1; i <= m; i++){
        for(int moneda : monedas){
            if (i - moneda >= 0 && soluciones[i - moneda] != INT_MAX) {
                soluciones[i] = min(soluciones[i], soluciones[i - moneda] + 1);
            }
        }
    }
    if (soluciones[m] == INT_MAX) {
        cout << -1;
    } else {
        cout << soluciones[m];
    }
}