#include <iostream>
#include <unordered_set>

using namespace std;

int main(){
    int tt; cin >> tt;
    while(tt--){
        int n, mx = INT_MIN, x;
        cin >> n;
        long long cnt = 0;
        unordered_set <int> s;
        
        for(int i = 0; i < n; i++){
            cin >> x;
            if(s.find(x)==s.end()){
                s.insert(x);
                cnt++;
            }
        }
        cout << cnt << '\n';
        
    }
}