#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    vector <string> res;
    while(t--){
        int n, m;
        cin >> n >> m;

        vector <int> arr(n);
        int flag = 1;
        //vector<int> arr1(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            if(i == 0) continue;
            if(arr[i] < arr[i-1]){
                flag = 0;
            } 
        }
        if(m > 1){
            res.push_back("YES");
            continue;
        }
        if(flag) res.push_back("YES");
        else res.push_back("NO");
       
    }
    for(int i = 0; i < res.size(); i++){
        cout << res[i] << '\n';
    }
}