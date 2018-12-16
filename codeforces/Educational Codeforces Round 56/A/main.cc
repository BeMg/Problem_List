#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    while(N--) {
        int tmp;
        cin >> tmp;

        int sum = 0;

        sum += tmp / 7;
        sum += 1;

        cout << sum << endl;

    }


    return 0;
}