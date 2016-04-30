#include <bits/stdc++.h>
using namespace std;

int prime[1000000*2+3]={0};

int main() {
    
    for(int i=2; i<1000000*2+3; i++) {
        if(prime[i] == 0) {
            for(int j=2; j*i<1000000*2+3; j++) {
                prime[i*j] = 1;
            }
        }
    }


    int n;
    cin >> n;
    
    int a[n];
    
    for(int i=0; i<n; i++)
        cin >> a[i];
        
    
    while(1){
        
        int mp[1000+30] = {0};
        
        int idx = 0, max = 0;
        
        for(int i=0; i<n; i++) {
            for(int j=i+1; j<n; j++) {
                //cout << a[i] << " " << a[j] << endl;
                //cout << "mp: " << prime[a[i]+a[j]] << endl;
                if(prime[a[i]+a[j]] == 1) {
                    mp[i]++;
                    mp[j]++;
                    if(mp[i] > max) {
                        idx = i;
                        max = mp[i];
                    }
                    if(mp[j] > max) {
                        idx = j;
                        max = mp[j];
                    }
                }
            }
        }
        
        //cout << "max: " << max << endl;
        
        if(max == 0)break;
        
        int temp = a[n-1];
        a[n-1] = a[idx];
        a[idx] = temp;
        n--;
        
    }
    
    cout << n << endl;
    for(int i=0; i<n; i++) {
        printf("%d%c",a[i], i==n-1 ? '\n' : ' ');
    }

    return 0;
}