#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, mn = INT_MAX;
        cin >> n;
        int flag = 1;
        vector <int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            if(i!=0){
                mn = min(abs(arr[i-1]-arr[i]), mn);
            }
            if(i!=0 && arr[i-1] > arr[i]) flag = 0;
        }
        if(!flag){
            cout << 0;
        }
        else{
            int x;
            //cout << mn/2 << ' ';
            if(mn%2 == 0) mn++;
            x = (mn)/2 + 1;
            cout << x;
        }
        cout << '\n';
    }
}