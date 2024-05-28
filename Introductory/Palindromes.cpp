#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <array>
#include <map>
using namespace std;

int main(){
    string s;
    cin >> s;

    int c[26] = {}, c1 = 0;

    for(char d : s){
        ++c[d - 'A'];
    }

    for(int i = 0; i < 26; i++){
        c1+= c[i]%2;
    }
    if(c1 > 1){
        cout << "NO SOLUTION";
        return 0;
    }
    string t;
    char impar = '@';
    for(int i = 0; i < 26; i++){
        if(c[i]%2 == 0 && c[i] != 0){
            for(int j = 0; j < c[i]/2; j++)
                t += 'A' + i;
        }
        if(c[i]%2 == 1){
            impar = 'A' + i;
            for(int j = 0; j < (c[i] - 1)/2; j++)
                t += 'A' + i;
        }
    }

    string tReves = t;
    reverse(tReves.begin(), tReves.end());
    if(impar == '@'){
        t += tReves;
    }else{
        t += impar + tReves;
    }
    
    cout << t;

}