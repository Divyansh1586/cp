#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector <int> arr(n);
        int mx = INT_MIN, flag = 0;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            mx = max(arr[i], mx);
            if(i!=0 && arr[i-1] != arr[i]) flag = 1;
        }
        if(flag){
            vector <int> a;
            vector <int> b;
            for(int i = 0; i < n; i++){
                if(arr[i] == mx) b.push_back(arr[i]);
                else a.push_back(arr[i]); 
            }
            cout << a.size() << ' ' << b.size() << '\n';
            for(int i = 0; i < a.size(); i++){
                    cout << a[i] << ' ';
                }
                cout << '\n';
            for(int i = 0; i < b.size(); i++){
                cout << b[i] << ' ';
            }
        }
        else{
            cout << -1;
        }
        cout << '\n';
    }
}