#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, ans = 0, x = 0, y = 1;
        cin >> n;
        
        for(int i = 0; i < n; i++){
            y = x; 
            cin >> x;
            if(i!=0 && x%2 == y%2) ans++;
        }
        cout << ans << '\n';


    }
 }