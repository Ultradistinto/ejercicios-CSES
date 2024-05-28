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
    long long  M = -1e18, ans = -1e18;
    for(int i = 0; i < n; i++){
        long long r;
        cin >> r;
        M = max(r, M+r);
        ans = max(ans, M);
    }
    cout << ans;
}