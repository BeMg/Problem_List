#include <bits/stdc++.h>
using namespace std;

int main(){
    string a;
    cin >> a;

    int len = a.length();
    
    for(int i=0; i<len-1; i++) {
        if(a[i] == a[i+1]){
            if(i<len-1 && a[i+1] == a[i+2]) {
                while(a[i+1]==a[i] || a[i+1] == a[i+2]) {
                    a[i+1]++;
                    if(a[i+1] > 'z') {
                        a[i+1] = 'a';
                    }
                }
            }else if(i == 0) {
                while(a[i+1]==a[i]) {
                    a[i]++;
                    if(a[i] > 'z') {
                        a[i] = 'a';
                    }
                }
            }else {
                while(a[i+1] == a[i] || a[i] == a[i-1]){
                    a[i]++;
                    if(a[i] > 'z') {
                        a[i] = 'a';
                    }
                }
            }
        }
    }
    
    cout << a << endl;

    return 0;
}