#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    int t;
    cin >> t;
    //vector <string> res(t);
    for(int w = 0; w < t; w++){
        int n;
        cin >> n;
        vector <int> arr(n);

        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        

        if(arr[0] == 1){
            cout << "yes" << '\n';
        }
        else{
            cout << "no" << '\n';
        }

    }

   
}