#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int ans[n][4];
    for(int i=1; i<=n; i++) {
        ans[i-1][0] = 2*n+2*(i-1)+1;
        ans[i-1][1] = 1+2*(i-1);
        ans[i-1][2] = 2*n+2*(i-1)+2;
        ans[i-1][3] = 1+2*(i-1)+1;
    }
    int out[m];
    int cnt = 0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<4; j++) {
            if(ans[i][j]<=m) {
                out[cnt++] = ans[i][j];
            }
        }
    }
    for(int i=0; i<cnt; i++) {
        printf("%d%c",out[i],i==cnt-1 ? '\n' : ' ');
    }
    return 0;
}