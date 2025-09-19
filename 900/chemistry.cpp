#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        
        string s;
        cin >> s;

        unordered_map <char, int> mpp;      
        
        for(auto c: s){
            mpp[c]++;
        }
        int odcnt = 0;
        for(auto c: mpp){
            if(c.second % 2 == 1){
                odcnt++;
            }
        }
        if(odcnt > k+1) cout << "No\n";
        else cout << "Yes\n"; 

    }
}