#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a = 0;
        int n;
        cin >> n;
        vector <int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            if(arr[i] % 2 == 1) a++;
        }
        
        a%2==0 ? cout << "YES" : cout << "NO";
        cout << '\n';
    }
}