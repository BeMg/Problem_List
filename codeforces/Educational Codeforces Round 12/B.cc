#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n,m,K;
    
    cin >> n >> m >> K;
    
    int a[K];
    
    for(int i=0; i<K; i++) {
        cin >> a[i];
    }
    
    int ans = 0;
    
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            int temp;
            cin >> temp;
            int idx = 0;
            while(a[idx] != temp)idx++;
            ans+=idx+1;
            for(int k = idx; k>0; k--) {
                a[k] = a[k-1];
            }
            a[0] = temp;
            
        }
    }
    
    cout << ans << endl;
    
    return 0;
}