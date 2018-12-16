#include <bits/stdc++.h>
using namespace std;

int main() {

    long long N;

    cin >> N;

    vector<long long> v;

    for(int i=0; i<N/2; i++) {
        long long tmp;
        cin >> tmp;
        v.push_back(tmp);
    }
    reverse(v.begin(), v.end());

    vector<long long> rst(N);
    
    for(int i=0; i<N/2; i++) {
        rst[i+N/2] = v[i];
    }

    if(rst[N/2] % 2 == 1) {
        rst[N/2 - 1] = rst[N/2] / 2;
        rst[N/2] = rst[N/2] / 2 + 1; 
    } else {
        rst[N/2 - 1] = rst[N/2] / 2;
        rst[N/2] = rst[N/2] / 2;
    }

    long long cnt = 1;
    long long lower = rst[N/2 - 1];
    long long upper = rst[N/2];
    for(int i=N/2+1; i<N; i++) {
        cnt += 2;
        //cout << i << " " << rst[i] << endl;
        //cout << upper << " " << lower << endl;
        if(rst[i] < upper + lower) {
            upper = upper;
            lower = rst[i] - upper;
        } else {
            upper = rst[i] - lower;
            lower = lower;
        }
        rst[i] = upper;
        rst[i - cnt] = lower;
    }

    for(int i=0; i<N; i++) {
        cout << rst[i];
        if(i != N-1) {
            cout << " "; 
        } else {
            cout << "\n";
        }
    }

    return 0;
}