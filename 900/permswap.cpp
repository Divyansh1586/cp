#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b, a%b);
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x, ans = 1;
        cin >> n;
        bool flag = true;
        for(int i = 0; i < n; i++){
            cin >> x;
            int diff = abs(x - i - 1);
            if(diff > 0){
                if(flag){
                    flag = false;
                    ans = diff;
                }
                else ans = gcd(ans, diff);
            }
            
        }
        cout << ans << "\n";
    }
}