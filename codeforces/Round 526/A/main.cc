#include <bits/stdc++.h>
using namespace std;

int main() {

    int N;

    cin >> N;
    
    vector<int> v;

    while(N--) {
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }

    int ans = 1215752192;
    
    for(int i=1; i<=(int)v.size(); i++) {
        int sum = 0;
        for(int j=1; j<=(int)v.size(); j++) {
            sum += v[j-1] * (abs(i-j) + abs(j-1) + abs(1-i)) * 2;
        }
        // cout << sum << endl;
        ans = min(ans, sum);
    }    

    cout << ans << endl;

    return 0;
}