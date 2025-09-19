#include <iostream>
#include <algorithm>
#include <set>
#include <cmath>
#include <utility>

using namespace std;

set <pair<int, int>> combinations(int a, int b, int k1, int k2){
    set<pair<int, int>> s = {
        {k1 - b, k2 + a},
        {k1 + b, k2 + a},
        {k1 + a, k2 + b},
        {k1 + a, k2 - b},
        {k1 + b, k2 - a},
        {k1 - b, k2 - a},
        {k1 - a, k2 - b},
        {k1 - a, k2 + b}
    };
     return s;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n1, n2;
        int k1, k2, q1, q2;

        cin >> n1 >> n2 >> k1 >> k2 >> q1 >> q2;
        
        set <pair<int, int>> s1 = combinations(n1, n2, k1, k2);
        set <pair<int, int>> s2 = combinations(n1, n2, q1, q2);

        int cnt = 0;
        for(auto c: s1){
            if(s2.find(c)!=s2.end()) cnt++;
        }

        cout << cnt << '\n';
        
    }
}