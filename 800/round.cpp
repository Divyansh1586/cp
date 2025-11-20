#include <iostream>
#include <string>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin>>s;
    
        int v = 0;
        v += stoi(string{s[0]});
        v += 9 * (s.size()-1);
        cout<<v<<"\n";
    }
}