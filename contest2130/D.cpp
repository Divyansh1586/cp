#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;
        int temp = n, ans = 0;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            if(temp > x){
                ans++;
                temp = x;
            }
        }
        cout << ans << '\n';
    }
}