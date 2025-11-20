#include <iostream>
#include <string>
using namespace std;

int main(){
    int tt; cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int zcnt = 0;
        for(auto c: s){
            if(c == '0') zcnt++;
        }
        int cnt = 0;
        for(int i = 0; i < n; i++){
            if(i < zcnt && s[i] == '0') cnt++;
        }
        cout << zcnt - cnt << '\n';
    }
}