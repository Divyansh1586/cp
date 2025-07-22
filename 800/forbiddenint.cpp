#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k, x;
        cin >> n >> k >> x;
        if(k == x && x == 1) cout << "NO";
        else if(x != 1){
            cout << "YES" << '\n';
            cout << n << '\n';
            for(int i = 0; i < n; i++){
                cout << 1 << ' '; 
            }
        }
        else{
            if(k == 2){
                if(n%2 == 1) cout << "NO";
                else{
                    cout << "YES" << '\n';
                    cout << n/2 << '\n';
                    for(int i = 0; i < n/2; i++){
                        cout << 2 << ' ';
                    }
                }
            }
            else{
                if(n%2 == 0){
                    cout << "YES" << '\n';
                    cout << n/2 << '\n';
                    for(int i = 0; i < n/2; i++){
                        cout << 2 << ' ';
                    }
                }
                else{
                    n-=3;
                    cout << "YES" << '\n';
                    cout << n/2 + 1 << '\n';
                    cout << 3 << ' ';
                    for(int i = 0; i < n/2; i++){
                        cout << 2 << ' ';
                    }
                }
            }
        }
        cout << '\n';
    }
}