#include <bits/stdc++.h>
using namespace std;

int GCD(int a, int b) {
    if(b == 0) return a;
    return GCD(b, a%b);
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
    int cnt = 1;
    int ans[10000];
    ans[0] = a[0];
    for(int i=1; i<n; i++) {
        if(GCD(a[i],a[i-1]) == 1) {
            ans[cnt++] = a[i];
        } else {
            /*
            int temp = min(a[i],a[i-1]);
            cout << a[i-1] << " " << a[i] << endl;
            while(GCD(temp,a[i])!=1 || GCD(temp,a[i-1])!=1) {
                temp++;
            }
            */
            ans[cnt++] = 1;
            ans[cnt++] = a[i];
        }
    }
    cout << cnt - n << endl;
    for(int i=0; i<cnt; i++) {
        printf("%d%c",ans[i],i==cnt-1 ? '\n' : ' ');
    }
    return 0;
}