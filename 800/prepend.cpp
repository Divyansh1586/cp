#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        int l = 0, r = n - 1;
        while(s[l]!=s[r]){
            l++; r--;
        }
        int ans = r - l + 1;
        cout << max(ans, 0) << '\n';
    }
}