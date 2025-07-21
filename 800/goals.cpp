#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t;
    cin >> t;
    vector <int> res(t);

    for(int w =0; w < t; w++){
        int n;
        cin >> n;
        int ans = 0;
        for(int i = 0; i < n-1; i++){
            int x;
            cin >> x;
            ans+=x;
        }
        res[w] = ans*-1;

    }

    for(int i = 0; i < t; i++){
        cout << res[i] << '\n';
    }
}