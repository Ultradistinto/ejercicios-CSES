#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>


int main(){
    int n, m, k;
    cin >> n >> m >> k;
    int ans = 0;
    vector<long> apartamentos(n);
    vector<long> inquilinos(m);

    for(int i = 0; i < n; i++)
        cin >> apartamentos[i];
        
    for(int i = 0; i < m; i++)
        cin >> inquilinos[i];

    sort(apartamentos.begin(), apartamentos.end());
    sort(inquilinos.begin(), inquilinos.end());

    int i = 0;  
    int j = 0;
    while(i < n && j < m){
        if(abs(apartamentos[i] - inquilinos[j]) <= k){
            ans++;
            j++;
            i++;
        }
        else{
            if(apartamentos[i] > inquilinos[j]){
                j++;
            }
            else{
                i++;
            }
        }
    }
    
    cout << ans;
}