#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--){
        string s, x;
        cin >> s >> x;
        
        unordered_map <char, int> mpp;
        for(char c: x) mpp[c]++;

        int i = s.size() - 1;
        int j = x.size() - 1;
        bool flag = false;
        while(i >= 0){
            if(mpp[s[i]] == 0){
                i--; continue;
            }
            if(s[i] == x[j]){
                mpp[s[i]]--; 
            }
            else{
               if(mpp[s[i]] > 0){
                    break;
               }
            }
            i--; j--;
            if(j == -1){
                flag = true;
                break;
            }
        }
        flag ? cout << "YES\n" : cout << "NO\n";
    }
}
