#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <set>
#include <array>
#include <map>


int main(){
    int n;
    long k;
    cin >> n;
    multiset<long> Torres;
    int retorno = 0;
    
    for(int i = 0; i < n; i++){
        cin >> k; 
        
        auto it = Torres.upper_bound(k);

        if (it == Torres.end()) {
            retorno++;
            Torres.insert(k);
        }
        else {
            Torres.erase(it);
            Torres.insert(k);
        }
    }
    cout << retorno;
}