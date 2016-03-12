#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m,k;
    cin >> n >> m >> k;
    int row[n];
    int col[m];
    fill(row,row+n,0);
    fill(col,col+m,0);
    int cnt = 1;
    map<int,int> mp;
    while(k--) {
        int a,b,c;
        cin >> a >> b >> c;
        if(a==1) {
            row[b-1] = c;
            mp[b-1] = cnt++;
        }else {
            col[b-1] = c;
            mp[b-1+6000] = cnt++;
        }
    }
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(mp[i] > mp[j+6000]) {
                printf("%d%c",row[i],j==m-1 ? '\n' : ' ');
            }else {
                printf("%d%c",col[j],j==m-1 ? '\n' : ' ');
            }
        }
    }
    return 0;
}
