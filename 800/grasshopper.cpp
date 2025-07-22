#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        int mod = x%y;
        if(mod == 0) {
            cout << 2 << '\n';
            cout << x - 1 << ' ' << 1; }
        else { cout << 1 << '\n'; cout << x;}
        cout << '\n';
    }
}