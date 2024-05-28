#include <iostream>

using namespace std;

int main(){
    string s;
    cin >> s;
    int ans = 0;
    int act = 0;
    char l  = 'A';
    for(char d : s){

        if(l == d){
            act++;
            ans = max(act, ans);
        }
        else{
            act = 1;
            l = d;
        }
    }
    cout << ans;
}