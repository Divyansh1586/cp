#include <iostream>
#include <vector>

using namespace std;

int main(){
    int tt; cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        int a[n], b[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int sum = 0;
        for(int i = 0; i < n; i++){
            if(a[i] > b[i]){
                sum += a[i] - b[i];
            }
        }
        cout << sum + 1 << '\n';
    }
}