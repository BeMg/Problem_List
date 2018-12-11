#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, k;

    cin >> n >> k;

    unordered_map<int, int> mp;
    std::priority_queue<int> q;

    int tmp;
    for(int i=0; i<n; i++) {
        cin >> tmp;
        if(mp[tmp] == 0) {
            q.push(-tmp);
            mp[tmp] = 1;          
        }
        else {

        }
    }

    int cnt = 0;
    int sum = 0;
    while(!q.empty()) {
        cnt++;
        if(cnt > n || cnt > k) {
            break;
        }
        int i = -q.top();
        q.pop();
        cout << i - sum << endl;
        sum += (i - sum);
    }

    for(;cnt<k; cnt++) {
        cout << 0 << endl;
    }
     

    


    return 0;
}