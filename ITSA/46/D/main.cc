#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    while(n--) {
        int m;
        cin >> m;
        int a[m];
        for(int i=0; i<m; i++) {
            cin >> a[i];
        }
        sort(a,a+m);
        reverse(a,a+m);
        long long int ans = 0;
        int pre = 0;
        int pre_tax = 0;
        for(int i=0; i<m; i++) {
            if(pre == a[i]) {
                ans+=a[i]*pre_tax/100;
                continue;
            }
            double tax_float = (double)i/(double)m*100;
            int tax_int = tax_float;
            
            if(tax_float>(double)tax_int)
                tax_int = tax_float + 1;
            //printf("%d %d\n",a[i],tax_int);
            
            if(tax_int >=0 && tax_int <=10){
                ans+=a[i]*40/100;
                pre_tax = 40;
            }else if(tax_int >=11 && tax_int <=30) {
                ans+=a[i]*30/100;
                pre_tax = 30;
            }else if(tax_int >=31 && tax_int <=60) {
                ans+=a[i]*20/100;
                pre_tax = 20;
            }else if(tax_int >=61 && tax_int <=80) {
                ans+=a[i]*10/100;
                pre_tax = 10;
            }else {
                pre_tax = 0;
                break;
            }
            pre = a[i];
            
        }
        cout << ans << endl;
    }
    return 0;
}