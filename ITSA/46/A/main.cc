#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int b[100];
    long long int s[100];
    b[0] = 0;
    b[1] = 1;
    s[0] = 1;
    s[1] = 0;
    int n;
    cin >> n;
    int temp1;
    int temp2;
    for(int i=2; i<=n+2; i++) {
        b[i] = b[i-1] + s[i-1];
        s[i] = b[i-1];
    }
    cout << b[n-1]+s[n-1] << endl;
    return 0;
}