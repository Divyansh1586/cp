#include <iostream>
#include <cmath>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

int main(){
    // int t;
    // cin >> t;
    // vector <int> res(t);

    //for(int w = 0; w < t; w++){
        int n;
        cin >> n;

        int min = INT_MAX;

        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            if(min > abs(x)) min =abs(x);
        }
        
        cout << min << '\n';
    //}

    // for(int i = 0; i < t; i++){
    //     cout << res[i] << '\n';
    // }
}