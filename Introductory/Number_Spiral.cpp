#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    long y, x;
    for(int i = 0; i < t; i++){
        cin >> y >> x;
        long z = max(x, y);
        long z2 = (z-1)*(z-1);
        if(z2%2 == 0){
            if(y == z){
                cout << z2 + x << "\n";
            }else{
                cout << z2 + 2*z - y << "\n";
            }
        }
        else{
            if(x == z){
                cout << z2 + y << "\n";
            }else{
                cout << z2 + 2*z - x << "\n";
            }
        }
    }
}