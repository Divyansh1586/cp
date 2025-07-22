#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int helper(int i, int j){
    if(i > 4) i = 9 - i;
    if(j > 4) j = 9 - j;

    return min(i, j) + 1;
}

int main(){
    int t;
    cin >> t;
    vector <int> res(t);

    for(int w = 0; w < t; w++){
        int ans = 0;
        for(int i = 0; i < 10; i++){
            for(int j = 0; j < 10; j++){
                char c;
                cin >> c;
                if(c == 'X') ans += helper(i, j);
            }
        }
        res[w] = ans;
    }

    for(int i = 0; i < t; i++){
        cout << res[i] << '\n';
    }
}