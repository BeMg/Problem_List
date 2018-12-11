#include <bits/stdc++.h>
using namespace std;

int main() {

    int x;
    cin >> x;

    int a = x;
    int b = 1;
    
    int flag = 0;


    for(int i=1; i<=x; i++) {
        for(int j=1; j<=x; j++) {
            if(i * j > x && j%i == 0 && j/i < x) {
                cout << j << " " << i << endl;
                flag = 1;
                break;
            }
        }
        if(flag) {
            break;
        }
    }

    if(flag == 0) {
        cout << -1 << endl;
    }


    return 0;
}