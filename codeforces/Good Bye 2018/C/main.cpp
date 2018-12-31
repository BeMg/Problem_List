#include <bits/stdc++.h>
using namespace std;

int main() {

    long long N;

    cin >> N;

    set<long long> v;
    
    for(int i=1; i*i<=N; i++) {
        long long tmp = 0;
        int j;
        if(N % i == 0) {
            tmp = ((1 + (N+1)-i) * (N/i)) / 2;
            v.insert(tmp);
            j = N/i;
            tmp = ((1 + (N+1)-j) * (N/j)) / 2;
            v.insert(tmp);
        }
    }


    for(auto i: v) {
        cout << i << " ";
    }
    
    return 0;
}