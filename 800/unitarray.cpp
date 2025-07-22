#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n;
        int cnt[2] = {0,0};
        for(int i = 0; i < n; i++){
            cin >> x;
            if(x==-1) cnt[0]++;
            else cnt[1]++;
        }
        int ans = 0;
        
        while(cnt[0] > cnt[1]){
            cnt[0]--;
            cnt[1]++;
            ans++;
        }
        if(cnt[0]%2 == 1) ans++;
        cout << ans << '\n';
    }
}