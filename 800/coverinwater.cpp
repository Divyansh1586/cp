#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t;
    cin >> t;
    vector <int> res(t);

    for(int w = 0; w < t; w++){
        int n;
        cin >> n;
        vector <char> arr(n);
        int dotcnt = 0;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            if(arr[i] == '.') dotcnt++;
        }
        int flag = 0;
        for(int i = 0;i < n-2 ;i++){
            if(arr[i] == '.' && arr[i+1] == '.' && arr[i+2] == '.') {
                flag = 1;
                break;
            }
        }
        if(flag) res[w] = 2;
        else res[w] = dotcnt;
    }
    for(int i = 0; i < t; i++){
        cout << res[i] << '\n';
    }
}