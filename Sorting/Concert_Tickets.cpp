#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <set>
#include <array>

int main(){
    int n, m; 
    cin >> n >> m;

    set<array<int, 2>> tickets;

    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        tickets.insert({a, i});
    }

    for(int i = 0; i < m; i++){
        int t;
        cin >> t;
        auto it = tickets.lower_bound({t + 1, 0});
        if(it  == tickets.begin()){
            cout << -1 << "\n";
        }
        else{
            --it;
            cout << (*it)[0] << "\n";
            tickets.erase(it);
        }
    }
}