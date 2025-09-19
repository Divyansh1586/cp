#include <iostream>
#include <vector>

using namespace std;

int main(){
    int tt; cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        bool flag = false;
        vector <int> arr(n+2,0);
        int x, cnt = 0; 
        for(int i = 0; i < n; i++){
            cin >> arr[i+1];
        }
        for(int i = 0; i < n+2; i++){
            if(arr[i] != 0){
                flag = true;
            }
            else {
                if(flag){
                    cnt++;
                    flag = false;
                }
            }
        }
        //if(flag) cnt++;
        cout << min(cnt, 2) << '\n';
    }
}