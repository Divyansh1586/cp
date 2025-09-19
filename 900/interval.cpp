#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
   int t;
   cin >> t;
   while(t--){
       long long int n;
        cin >> n;
        if(n%2 == 1){
            cout << "1\n";
        } 
        else{
            int cnt = 0, mx = 0;
            for(int i = 1; i <= 50; i++){
                if(n%i == 0) cnt++;
                else{
                    mx = max(mx, cnt);
                    cnt = 0;
                }
            }
            cout << mx << '\n';
        }
        
   } 
}