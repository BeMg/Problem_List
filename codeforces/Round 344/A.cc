#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    int b[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        cin >> b[i];
    }
    long long int Max = 0;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            long long int sum[2]={0,0};
            for(int k=i; k<=j; k++){
                sum[0]|=a[k];
                sum[1]|=b[k];
            }
            Max = max(sum[0]+sum[1],Max);
        }
    }
    cout << Max << endl;
    return 0;
}
