#include <bits/stdc++.h>
using namespace std;

int main() {
    
    long long int n,k;
    
    cin >> n >> k;
    
    int a[n];
    
    for(int i=0; i<n; i++)
        cin >> a[i];
        
    long long int cnt = 0;
    
    while(1){
        cnt++;
        if((1+cnt)*cnt >= 2*k){
            cnt--;
            break;
        }
    }

    k -= ((1+cnt)*cnt) / 2;
    
    k--;
    
    if(k<0)
        k = n-1;
    
    cout << a[k] << endl;
    
    return 0;
}