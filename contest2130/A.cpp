#include <iostream>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, x, sum = 0, mex = 0, c1 = 0, c2 = 0;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> x;
            if(x == 0) c1++;
            if(x == 1) c2++;
            sum += x;
        }
        
        cout << sum + c1 << '\n';
    }
}