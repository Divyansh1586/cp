#include <iostream>
#include <vector>   
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, x;
        cin >> n;
        vector <int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> x;
            arr[i] = n - x + 1;
        }
        for(int i = 0; i < n; i++){
            cout << arr[i] << ' '; 
        }
        cout << '\n';
    }
}