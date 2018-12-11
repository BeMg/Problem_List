#include <bits/stdc++.h>
using namespace std;

int main() {

    int N;
    cin >> N;

    while(N--) {
        int n, x, y, d;
        cin >> n >> x >> y >> d;
        int ans = -1;
        int tmp;
        int ans1 = -1;
        int ans2 = -1;


        if (abs(x - y) % d == 0) {
            ans = abs(x-y) / d;
        } else {
            // Top to y
            if ((n-y) % d == 0) {
                tmp = ((n-x) / d) + (((n-x) % d) ? 1 : 0); 
                ans1 = tmp + (n-y)/d;
            } 
            //1 to y
            if ((y - 1) % d == 0) {
                tmp = ((x-1) / d) + (((x-1) % d) ? 1 : 0);
                ans2 = tmp + (y-1) / d; 
            }
        }


        if(ans != -1) {
            cout << ans << endl;
        } else {
            if(ans1 == -1 && ans2 == -1) {
                cout << -1 << endl;
            } else if(ans1 == -1) {
                cout << ans2 << endl;
            } else if(ans2 == -1){
                cout << ans1 << endl;
            } else {
                cout << min(ans1, ans2) << endl;
            }
        }


    }
    return 0;
}