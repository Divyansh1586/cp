#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t;
    cin >> t;
    vector <string> res(t);

    for(int w = 0; w < t; w++){
        int n;
        cin >> n;
        if(n%3 == 0){
            res[w] = "Second";
        }
        else{
            res[w] = "First";
        }
    }
    for(int i = 0; i < t; i++){
        cout << res[i] << '\n';
    }
        
}