#include <iostream>
#include <map>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt; cin >> tt;
    while(tt--){
        int n, x;
        cin >> n;
        map <int, int> mpp;
        for(int i = 0; i < n; i++){
            cin >> x;
            mpp[x]++;
        }
        int mx = 1;
        for(auto i: mpp){
            mx = max(mx, i.second);
        }
        if(mx >= n) cout << "0\n";
        else {
            int cnt = 0;
            while(mx*2 <= n){
                cnt += mx + 1;
                mx *= 2;
            }
            if(mx == n) 
            cout << cnt << '\n';
            else cout << cnt + n - mx + 1 << '\n';
        }
    }
}