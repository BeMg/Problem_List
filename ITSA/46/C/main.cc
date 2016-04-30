#include <bits/stdc++.h>
using namespace std;


int check(char a) {
    if((a >= 'a' && a<='z') || (a>='A' && a<='Z'))
        return 1;
    return 0;
}


int main() {
    char a[1000];
    cin >> a;
    int len = strlen(a);
    map<string,int> mp;
    string temp;
    for(int i=0; i<len; i++) {
        if(check(a[i]))
            temp.append(a[i]);
        if(temp.lenght() == 3 && (i==len-1) || !check(a[i+1])) {
            mp[temp]++;
            cout << temp << endl;
            temp.clear();
        }
    }
    return 0;
}

