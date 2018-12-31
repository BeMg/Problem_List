#include <bits/stdc++.h>
using namespace std;

int main() {

    int y,b,r;

    cin >> y >> b >> r;

    int ans = 0;

    for(int i=1; i<=y; i++) {
        for(int j=2; j<=b; j++) {
            for(int k=3; k<=r; k++) {
                if(i+1 == j && j+1 == k) {
                    ans = max(ans, i+j+k);
                }
            }
        }
    }

    cout << ans << endl;
    return 0;
}