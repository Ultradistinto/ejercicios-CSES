#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>


int main(){
    int n, x;
    cin >> n >> x;

    vector<long> alumnos(n);

    for(int i = 0; i < n; i++)
        cin >> alumnos[i];
    
    sort(alumnos.begin(), alumnos.end());

    int i = 0;
    int j = n - 1;
    int ans = 0;
    while(i <= j){
        if(alumnos[j] + alumnos[i] > x){
            ans++;
            j--;
        }
        else{
            ans++;
            j--;
            i++;
        }  
        
    }
    cout << ans;

}