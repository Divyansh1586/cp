#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main(){
    int tt; cin >> tt;
    while(tt--){
        long long asum = 0, bsum = 0, n, mn = __LONG_LONG_MAX__, mx = -1;
        int ind1 = 0, ind2 = 1;
        cin >> n;
        vector <long long> arr(n);

        for(int i = 0; i < n; i++){
            cin >> arr[i];
            if(i%2 == 0) {
                asum++;
                if(mn > arr[i]){
                    mn = arr[i];
                    ind1 = i;
                }
                
            }
            else {
                bsum++;
                if(mx <= arr[i]){
                    mx = arr[i];
                    ind2 = i;
                }
            }
        }

        if(bsum > asum){
            if(n % 2 == 0){
                if((mx - mn) < (n - 2)){
                    cout << bsum  + n - 2;
                }
                else{
                    cout << 
                }
            }
            else{
                if((mx - mn) < (n - 2)){
                    cout << asum - bsum + n - 2;
                }
                else{
                    
                }
            }
        }

    }
}