#include <iostream>

using namespace std;

int main(){

    long n;
    cin >> n;
    long long ans = 1;

    while(n--){
        ans = 2*ans%((int)1e9+7);
    }
    cout << ans;
}