#include <bits/stdc++.h>
using namespace std;


struct movie{
    int audio,subtitle;
}

int main(){
    
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
        cin >> a[i];
    
    int m;
    cin >> m;
    movie b[m];
    for(int i=0; i<m; i++)
        cin >> b[i].audio;
    for(int i=0; i<m; i++)
        cin >> b[i].subtitle;
    
    return 0;
}