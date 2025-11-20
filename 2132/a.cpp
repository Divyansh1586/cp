#include <iostream>
#include <string>

using namespace std;

int main(){
    int tt; cin >> tt;
    while(tt--){
        int n, m;
        cin >> n;
        string a, b, c;
        cin >> a;
        cin >> m;
        cin >> b >> c;

        for(int i = 0; i < m; i++){
            if(c[i] == 'V') a = b[i] + a;
            else a = a + b[i];
        }
        cout << a << '\n';

    }
}