#include <iostream>
using namespace std;

int main(){
    int tt; cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        
        if (n == 2) {
            cout << "-1 2";
        } else if (n % 2 == 1) {
            bool flag = true;
            for (int i = 0; i < n; ++i) {
                if (flag) {
                    cout << -1;
                } else {
                    cout << 3;
                }
                if (i < n - 1) {
                    cout << " ";
                }
                flag = !flag;
            }
        } else { 
            bool flag = true;
            for (int i = 0; i < n; ++i) {
                if (flag) {
                    cout << -1;
                } else {
                    if (i == n - 1) {
                        cout << 2;
                    } else {
                        cout << 3;
                    }
                }
                if (i < n - 1) {
                    cout << " ";
                }
                flag = !flag;
            }
        }
        cout << '\n';
    }
    
}