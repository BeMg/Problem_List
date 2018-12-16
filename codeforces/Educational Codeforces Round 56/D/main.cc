#include <bits/stdc++.h>
using namespace std;

int main() {

    int N;

    cin >> N;

    while(N--) {
        int n, e;
        bool flag = false;

        cin >> n >> e;

        map<int, int> mp;

        int cnt = 0;
        for(int i=0; i<e; i++) {
            int f, t;
            cin >> f >> t;
            if(mp[f] == 1 || mp[t] == 1) {
                flag = true;
            } else {
                mp[f] = 1;
                mp[t] = 1;
                cnt += 1;
            }
        }


        long long sum = 1;

        if(flag) {
            cout << 0 << endl;
        } else {
            for(int i=0; i<cnt; i++) {
                sum *= 4;
                sum = sum % 998244353;
            }
            cout << sum << endl;
        }


    }


    return 0;
}