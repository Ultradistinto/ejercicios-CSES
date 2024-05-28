#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <set>
#include <array>
#include <map>
#include <cmath>

int solve(int n, vector<int>& resultados){
    if(n < 0){
        return 0;
    }
    if(n == 0){
        return 1;
    }
    if(resultados[n] != -1){
        return resultados[n];
    }
    int cont = 0;
    for(int i = 1; i < 7; i++){
        cont += solve(n - i, resultados);
        cont %= 1000000007;
    }
    resultados[n] = cont;
    return cont;
}

int main(){
    int n;
    cin >> n;
    vector<int> resultados(n + 1, -1);
    int cont = solve(n, resultados);
    cout << cont;
}