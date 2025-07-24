#include <iostream>
#include <vector>

using namespace std;

int main(){ 
    int t;
    cin >> t;

    while(t--){
        int n, x = 0, w;
        cin >> n;

        for(int i = 0; i < n; i++){
            cin >> w;
            x ^= w;
        }
        if(n%2 == 0){
            if(x == 0) cout << x;
            else cout << -1;
        }
        else{
            cout << x;
        }
        cout << '\n';
    }
}










