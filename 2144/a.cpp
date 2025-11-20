#include <iostream>
#include <vector>
using namespace std;

int main(){
    int tt; cin >> tt;
    while(tt--){
        int n; cin >> n;
        vector <int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            if(i!=0) arr[i]+=arr[i-1];
        }
        int l = 0, r = 0;
        for(int i = 0; i < n - 2; i++){
            int pre = arr[i]%3;
            bool flag = false;
            for(int j = i+1; j < n - 1; j++){
                int mid = (arr[j] - arr[i]) % 3;
                int suf = (arr[n-1] - arr[j]) % 3;
                int sum = mid + pre + suf;
                if(sum == 3 || sum % 3 == 0){
                    l = i + 1;
                    r = j + 1;
                    flag = true; break;
                }
            }
            if(flag) break;
        }
        cout << l << ' ' << r << '\n';
    }
}