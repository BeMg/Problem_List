#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    while(N--) {
        string s;
        cin >> s;
        map<char, int> mp;

        for(int i=0; i<s.length(); i++) {
            mp[s[i]] += 1;
        }

        if(mp.size() == 1) {
            cout << -1 << endl;
        } else {
            for(auto i: mp) {
                for(int j=0; j<i.second; j++) {
                    cout << i.first;
                }
            }
            cout << endl;
        }

    }

    
    return 0;
}