#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt; cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        vector<long long> arr(n);
        for(int i = 0; i < n; i++) cin >> arr[i];
        long long cnt = 0;
        bool flag = true;

        for(int i = n-2; i >= 0; i--){
            if(arr[i] >= arr[i+1]){
                if(arr[i+1] == 0){
                    flag = false;
                    break;
                }
                while(arr[i] >= arr[i+1] && arr[i] > 0){
                    arr[i]/=2;
                    cnt++;
                }
                if(arr[i] == 0 && i != 0){
                    flag = false;
                    break;
                }
            }
        }
        cout << (flag ? cnt : -1) << '\n';
    }
}
