#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <set>
#include <array>
#include <map>


int main(){
    int n, x;
    cin >> n >> x;

    map<int, int> numeros;

    for(int i = 1; i <= n; i++){
        int r;
        cin >> r;
        

        if(numeros.find(x - r) != numeros.end()){
            cout << numeros[x - r] << " " << i;
            return 0;
        }
        numeros[r] = i;
    }
    
    cout << "IMPOSSIBLE";
}