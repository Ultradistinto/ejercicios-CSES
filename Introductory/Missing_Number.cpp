#include <iostream>

using namespace std;

int main(){
    long n;
    long total = 0;
    cin >> n;
    int* vec = new int[n - 1];
    for(int i = 0; i < n - 1; i++){
        cin >> vec[i]; 
    }
    for(int i = 0; i < n - 1; i++){
        total = total + vec[i];
    }
    cout << (n*(n + 1))/2 - total;
}