#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main(){
    int t;
    cin >> t;
    vector <string> res(t);
    for (int w = 0; w < t; w++) {
        int n;
        cin >> n;
        unordered_map <int, int> mpp;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            mpp[x]++;
        }
        if(mpp.size() == 1 || mpp.size() == 0) res[w] = "yes";
        else if(mpp.size() > 2){
            res[w] = "no";
        }
        else{
            int arr[2], i = 0;
            for(auto u: mpp){
                arr[i++] = u.second;
            }
            if(abs(arr[1]-arr[0]) <= 1) res[w] = "yes";
            else res[w] = "no";
        }
    }
    for(int i = 0; i < res.size(); i++){
        cout << res[i] << '\n';
    }
}
