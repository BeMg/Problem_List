#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int ans[10000];
    int cnt = 0;
    for(int i=0; i<1000; i++) {
        int temp = i;
        vector<int> a;
        while(temp!=0) {
            a.push_back(temp%10);
            temp/=10;
        }
        reverse(a.begin(),a.end());
        for(int j=0; j<a.size(); j++) {
            ans[cnt++] = a[j];
        }
    }
    
    cin >> n;
    cout << ans[n-1] << endl;
    
    return 0;
    
}