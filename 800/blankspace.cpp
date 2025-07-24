#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int x;
        int mx = 0, tmp = 0;
        for(int i = 0; i < n; i++){
            cin >> x;
            if(x == 0) {
                tmp++;
                mx = max(mx, tmp);
            }
            if(x == 1) tmp = 0;
        }
        cout << mx << '\n';
    }
}