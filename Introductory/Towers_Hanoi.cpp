#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <set>
#include <array>
#include <map>
#include <cmath>

void hanoi(int n, int orig, int aux, int des){
    if(n > 0){
        hanoi(n - 1, orig, des, aux);
        cout << orig << " " << des << '\n';
        hanoi(n - 1, aux, orig, des);
    }
}

int main(){
        int n;
        cin >> n;
        cout << pow(2, n) - 1<< '\n';
    hanoi(n, 1, 2, 3);
}