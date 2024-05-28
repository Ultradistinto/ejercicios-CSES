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
    vector<long> palos(n);

    for(int i = 0; i < n; i++)
        cin >> palos[i];
    
    sort(palos.begin(), palos.end());

    long long mediana = palos[n/2];
    long long ans = 0;
    for(int i = 0; i < n; i++){
        ans += abs(mediana-palos[i]);
    }
    cout << ans;
}