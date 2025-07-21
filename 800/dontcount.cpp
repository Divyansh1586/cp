#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <unordered_map>

using namespace std;

bool help(string x, string s){
    if(x.size() < s.size()) return false;
    if (x.find(s) != string::npos) {
        return true;
    }
    return false;
}

int main(){
    int t;
    cin >> t;
    vector <int> res(t);
    for (int w = 0; w < t; w++) {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x;
        cin >> s;
        int ans = -1;
        
        for(int i = 0; i <= 5; i++){
            if(help(x, s)) {
                ans = i;
                break;
            }
            x+=x;
        }
        res[w] = ans;
        
    }
    for(int i = 0; i < res.size(); i++){
        cout << res[i] << '\n';
    }
}
