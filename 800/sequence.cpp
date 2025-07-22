#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t; 
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector <int> arr(n);

        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
    
        vector <int> s;
        
        
        for(int i = 0; i < n; i++){
            if(i!=0 && arr[i-1] > arr[i]) s.push_back(1);
            s.push_back(arr[i]);
        }

        cout << s.size() << '\n';
        for(int i = 0; i < s.size(); i++){
           cout << s[i] << ' ';
        }
        cout << '\n';
    }
}