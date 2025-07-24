#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <climits>

using namespace std;

// int dist(int x1, int x2, int y1, int y2){
//     return sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
// }

// int eq(int x1, int x2, int y1, int y2, int c, int d){
//     int constant = y1 - (y2-y1)/(x2-x1) * x1;
//     bool exp = d == (y2-y1)/(x2-x1) * c + y1 - (y2-y1)/(x2-x1) * x1;
//     if(exp) return dist(x1, x2, y1, y2);
//     return -1;
// }

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int ans = -1;
        if(b > d) cout << -1;
        else{
            int diff = abs(b-d);
            
            a += diff;
            if(a < c) cout << -1;
            else{
                ans = diff + abs(a-c);
                cout << ans;
            }
            
        }
        cout << '\n';
        // int x1 = a, y1 = b, x2 = a+1, y2 = b+1, x3 = a - 1, y3 = b;
        
        // int ans1 = eq(x1, x2, y1, y2, c, d);
        // int ans2 = eq(x1, x3, y1, y3, c, d);

        // int finalans = -1;

        // if(ans1!=-1 && ans2!=-1) finalans = min(ans1, ans2);
        // else if(ans1 != -1) finalans = ans1;
        // else if(ans2 != -1) finalans = ans2;

        // cout << finalans << '\n';
    }
}