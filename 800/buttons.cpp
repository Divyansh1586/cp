#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    int t;
    cin >> t;
    vector <string> res(t);

    for(int w = 0; w < t; w++){
        int a, b, c;
        cin >> a >> b >> c;
        int turn = c % 2;
        if(a == b) {
            if(turn == 0) res[w] = "Second";
            else res[w] = "First";
        }
        else if(a > b){
            res[w] = "First";
        }
        else{
            res[w] = "Second";
        }
    }

    for(int i = 0; i < t; i++){
        cout << res[i] << '\n';
    }
}