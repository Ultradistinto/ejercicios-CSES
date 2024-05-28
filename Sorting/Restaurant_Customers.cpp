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
        clientes.insert({a, 1});
        clientes.insert({b + 1, -1});
    }

    int ans = 0, c = 0;
    for(array<int, 2> a : clientes){
        c+= a[1];
        ans = max(c, ans);
    }
    cout << ans;
}