#include <iostream>
using namespace std;

int main(){
    int tt; cin >> tt;
    while(tt--){
        int n, m, x, y;
        cin >> n >> m >> x >> y;
        int t;
        for(int i = 0; i < m + n; i++) cin >> t;
        cout << m+n << '\n';
    }
}