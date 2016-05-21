#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string input;
    cin >> input;
    if(n>26) {
        cout << "-1" << endl;
        return 0;
    }
    map<int,int> mp;
    
    int ans = 0;
    for(int i=0; i<n; i++) {
        if(mp[input[i]-'a'] == 0) {
            mp[input[i]-'a'] = 1;
        }else
            ans++;
    }
    cout << ans << endl;
    return 0;
}