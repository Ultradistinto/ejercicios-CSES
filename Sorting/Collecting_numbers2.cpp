#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <set>
#include <array>
#include <map>
int colNum1(int n, vector<int> numeros, vector<int> indices){
    int retorno = 1;
    for(int i = 1; i < n; i++){
        if(indices[i] > indices[i + 1])
            retorno++;
    }
    return retorno;
}
int main(){
    int n, m, a, b;
    cin >> n >> m;
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
    
    for(int i = 0; i < m; i++){
        cin >> a >> b;
        a--;
        b--;
        set<int> Check;

        Check.insert(numeros[a]);
        if(numeros[a] > 1) Check.insert(numeros[a] - 1);
        if(numeros[a] < n) Check.insert(numeros[a] + 1);


        
        Check.insert(numeros[b]);
        if(numeros[b] > 1) Check.insert(numeros[b] - 1);
        if(numeros[b] < n) Check.insert(numeros[b] + 1);

        swap(numeros[a], numeros[b]);
        swap(indices[numeros[a]], indices[numeros[b]]);

        for(int x : Check){
            if(x > 1 && indices[x] < indices[x - 1])
                retorno++;
            else if(x > 1 && indices[x] > indices[x - 1]){
                retorno--;
            }
            if(x < n && indices[x] > indices[x + 1])
                retorno++;
            else if(x < 1 && indices[x] < indices[x + 1]){
                retorno--;
            }
        }
        cout << retorno << '\n';
    }
}