#include <iostream>

using namespace std;

int main(){
    int tt; cin >> tt;
    while(tt--){
        int n, k;
        cin >> n >> k;
        if(k%2 != 0){
            cout << n << '\n';
        }
        else{
            cout << "0\n";
        }
    }
}