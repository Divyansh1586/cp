#include <iostream>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, s, zero = 0, one = 0, two = 0;
        cin >> n >> s;
        int sum = 0;
        int x;
        for(int i = 0; i < n; i++){
            cin >> x;
            if(x == 0) zero++;
            if(x == 1) one++;
            if(x == 2) two++;
            sum += x;
        }
        if(s < sum){
            for(int i = 0; i < zero; i++) cout << 0 << ' ';
            for(int i = 0; i < one; i++) cout << 1 << ' ';
            for(int i = 0; i < two; i++) cout << 2 << ' ';
            cout << '\n';
        }
        else if(sum == s) cout << "-1\n";
        else{
            if(s - 1 == sum){
                for(int i = 0; i < zero; i++) cout << 0 << ' ';
                for(int i = 0; i < two; i++) cout << 2 << ' ';
                for(int i = 0; i < one; i++) cout << 1 << ' ';
                cout << '\n';
            }
            else cout << -1 << '\n';
        }

    }
}