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

    vector<long> monedas(n);

    for(int i = 0; i < n; i++)
        cin >> monedas[i];

    sort(monedas.begin(), monedas.end());

    long ans = 0, c = 0;
    for(int i = 0; i < n; i++){
        if(monedas[i] - 1 > c){
            cout << c + 1;
            return 0; 
        }
        c+=monedas[i];
    }
    cout << c + 1;
}