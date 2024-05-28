#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

int main(){
    int n; 
    cin >> n;

    vector<int> miVector(n);

    for (int i = 0; i < n; i++) {
        cin >> miVector[i];
    }

    sort(miVector.begin(), miVector.end());
    int ans = 1;
    for(int i = 1; i < n ; i++){
        if(miVector[i] != miVector[i - 1])
            ans++;
    }
    cout << ans;
}