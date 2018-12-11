#include <bits/stdc++.h>

using namespace std;

int main() {

    long long N, s;
    cin >> N >> s;

    vector<long long> v;

    for(int i=0; i<N; i++) {
        long long  tmp;
        cin >> tmp;
        v.push_back(tmp);
    }

    sort(v.begin(), v.end());

    long long min = v[0];

    long long sum = 0;

    for(int i=1; i<N; i++) {
        sum += (v[i] - min);
    }

    if(sum >= s) {
        cout << min << endl;
    } else {
        s = s - sum;
        if(min * N < s) {
            cout << -1 << endl;
        } else {
            cout << min - (s / N) - (s % N ? 1 : 0) << endl;
        }
    }


    return 0;
}