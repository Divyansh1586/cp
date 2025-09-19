#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;
        int x, y;
        vector <int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            if(arr[i] == 1) arr[i] = 2;
        }
        cout << arr[0] << ' ';
        for(int i = 1; i < n; i++){
            if(arr[i]%arr[i-1] == 0) arr[i]++;
            cout << arr[i] << ' ';
        }
        cout << '\n';
        
    }
}