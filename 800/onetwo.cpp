#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int cnt = 0, n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            if(arr[i] == 2) cnt++;
        }
        if(cnt%2 == 1) cout << -1 << '\n';
        else{
            int nc = 0;
            if(cnt == 0) cout << 1 << '\n';
            else{
                for (int i = 0; i < n - 1; i++)
                {
                    if (arr[i] == 2)
                    {
                        nc++;
                        cnt--;
                        if (nc == cnt)
                        {
                            if(i == 0) cout << 1 << '\n';
                            else
                            cout << i + 1 << '\n';
                            break;
                        }
                    }
                }
            }
        }
    }
}