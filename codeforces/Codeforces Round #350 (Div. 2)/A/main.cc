#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int max = (n/7)*2;
    
    int min = (n/7)*2;
    
    if(n%7>2)
        max+=2;
    else
        max+=n%7;
        
    if(n%7 > 5)
        min+=1;
    
    cout << min << " ";
    cout << max << endl;
    
    
    
    
    
    return 0;
}