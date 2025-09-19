#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x = 0, y = 0;
        cin >> n;
        bool flag = true;
        for(int i = 0; i < n; i++) {
            cin >> x;
            if(x!=0) flag = false; 
        } 
        if(flag) cout << "0\n";
        else if(n%2 == 0){
            cout << "2\n";
            cout << "1 " << n << '\n';
            cout << "1 " << n << '\n';
        }
        else{
            cout << "4\n";
            cout << "1 " << n-1 << '\n';
            cout << "1 " << n-1 << '\n';
            cout << n-1 << " " << n << '\n';
            cout << n-1 << " " << n << '\n';
        }
    }
}