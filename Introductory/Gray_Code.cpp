#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <set>
#include <array>
#include <map>


using namespace std;


    vector<string> grisGenerador(int n){
        if(n == 1){
            return {"0", "1"};
        }


        vector<string> recAns = grisGenerador(n-1);

        vector<string> retorno;
        for(int i = 0; i < recAns.size(); i++){
            string s = recAns[i];
            retorno.push_back("0" + s);
        }

        for(int i = recAns.size() - 1; i >= 0; i--){
            string s = recAns[i];
            retorno.push_back("1" + s);
        }
        return retorno;
    }


int main(){
    int n;
    cin >> n;

    vector<string> cosa = grisGenerador(n);

    for(int i = 0; i < cosa.size(); i++){
        cout << cosa[i] << '\n';
    }
    
}