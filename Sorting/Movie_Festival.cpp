#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <set>
#include <array>


int main(){
    int n;
    cin >> n;

    set<array<int, 2>> clientes;

    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        clientes.insert({b, a});
    }
    int hora = 0;
    int ans = 0;
    for(array<int, 2> a : clientes){
        if(a[1] >= hora){
            hora = a[0];
            ans++;
        }
    }
    cout << ans;
}