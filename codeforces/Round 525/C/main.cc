#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;

    cin >> N;
    

    vector<int> v;
    for(int i=0; i<N; i++) {
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }
    
    bool flag = true;
    for(int i=0; i<(int)v.size()-1; i++) {
        if(v[i]>=v[i+1]) {
            flag = false;
            break;
        }
    }

    int sum = 0;
    if(flag) {
        cout << 0 << endl;
    } else {
        cout << N+1 << endl;
        for(int i=N-1; i>=0; i--) {
            // let v[i] % N == i
            int add = N - ((v[i]+sum) % N) + i;
            sum += add;
            cout << 1 << " " << i+1 << " " << add << endl;
        }
        cout << 2 << " " << N << " " << N << endl; 
    }

    return 0;
}