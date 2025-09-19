#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, q;
        cin >> n >> q;
        vector <int> pre(n+1, 0);
        vector <int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            pre[i+1] = arr[i] + pre[i];
        }
        
        for(int i = 0; i < q; i++){
            int l, r, k, sum = 0;
            cin >> l >> r >> k;
            int qsum = pre[r] - pre[l-1];
            int wind;
            if(k%2 == 0){
                wind = 0;
            }
            else{
                if((r-l+1)%2 == 0) wind = 0;
                else wind = 1;
            }
            int ans = (pre[n] - qsum + wind );
            //cout << "Sum: " << endl << ans << endl; 
            if(ans % 2 == 1) cout << "YES\n";
            else cout << "NO\n";
        }
    }
}