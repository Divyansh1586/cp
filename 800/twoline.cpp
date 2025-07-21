#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t;
    cin >> t;
    vector <int> res(t);
    for(int w = 0; w < t; w++){
        int n, x;
        cin >> n >> x;
        
        vector <int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int mx = arr[0];
        //cout << mx << endl;
        for(int i = 0; i < n - 1; i++){
            if((arr[i+1] - arr[i]) > mx) mx = arr[i+1]-arr[i];
           //cout << mx << ' ';
        }
        if(mx < ((x - arr[n-1])*2)) mx = (x - arr[n-1])*2;

        res[w] = mx;

    }
    for(int i = 0; i < t; i++){
        cout << res[i] << '\n';
    }
}