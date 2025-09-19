#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;
        int mn = INT_MAX, mx = INT_MIN;   
        vector <int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            mn = min(mn, arr[i]);
            mx = max(mx, arr[i]);
        }    
       
            int diff = max(mx-arr[0], arr[n-1]-mn);
            for(int i = 0; i < n - 1; i++){
                diff = max(diff, arr[i]-arr[i+1]);
            }
            cout << diff << '\n';

        
    }
}

