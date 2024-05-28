#include <iostream>

using namespace std;

int main(){
    long n;
    cin >> n;
    int maxN = 0;
    int c;
    long ans = 0;
    for(int i = 0; i < n; i++){
        cin >> c;
        maxN = max(maxN, c);
        ans = ans + maxN - c;
    }
    cout <<  ans;
}