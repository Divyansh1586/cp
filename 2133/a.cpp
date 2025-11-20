#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    int tt; cin >> tt;
    while(tt--){
        int n, x;
        cin >> n;
        bool flag = false;
        unordered_map <int, int> mpp;
        for(int i = 0; i < n; i++){
            cin >> x;
            mpp[x]++;
            if(mpp[x] >= 2) flag = true;
        }
        flag ? cout << "YES\n": cout << "NO\n";
    }
}