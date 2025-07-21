#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;

int main(){
    int t;
    cin >> t;
    vector <string> res(t);

    for(int w = 0; w < t; w++){
        int n, m;
        cin >> n >> m;
        unordered_map <int, int> arr;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            arr[x]++;
            //cout << x << ' ';
        }
        if(arr.find(m)!=arr.end()) res[w] = "yes";
        else res[w] = "no";
    }

    for(int i = 0; i < t; i++){
        cout << res[i] << '\n';
    }
}