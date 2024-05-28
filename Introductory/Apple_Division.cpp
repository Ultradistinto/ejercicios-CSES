#include <iostream>
#include <vector>

using namespace std;
int n;


long long Apple(int n, int index,vector<long long> &lista, long long sum1, long long sum2){
    if(n == index){
        return abs(sum1 - sum2);
    }
    
    return min(Apple(n, index + 1, lista, sum1 + lista[index], sum2), Apple(n, index + 1, lista, sum1, sum2 + lista[index]));
}


int main(){
    cin >> n;
    vector<long long> lista(n);
    for(int i = 0; i< n; i++)
        cin >> lista[i];
    cout << Apple(n, 0, lista, 0, 0);
}