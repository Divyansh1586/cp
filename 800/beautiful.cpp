#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        bool flag = true;
        int n;
        cin >> n;
        vector <int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            if(i!=0 && arr[i-1]!=arr[i]) flag = false; 
        }
        if(flag){
            cout << "NO" << '\n';
        }
        else{
            sort(arr.begin(), arr.end());
            cout << "YES" << '\n';
            cout << arr[0] << ' ' << arr[n-1] << ' ';
            for(int i = 1; i < n - 1; i++) cout << arr[i] << ' ';
            cout << '\n';
        }
    }
}