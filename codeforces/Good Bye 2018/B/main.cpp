#include <bits/stdc++.h>
using namespace std;

int main() {

    int N;

    cin >> N;

    long long x = 0;
    long long y = 0;
    for(int i=0; i<2*N; i++) {
        int tmp_x, tmp_y;
        cin >> tmp_x >> tmp_y;
        x += tmp_x;
        y += tmp_y;
    }

    cout << x/N << " " << y/N << endl;
    
    return 0;
}