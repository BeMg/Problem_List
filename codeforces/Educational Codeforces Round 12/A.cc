#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    int ta,tb;
    cin >> a >> ta;
    cin >> b >> tb;
    int start_hour,start_min;
    char temp;
    cin >> start_hour >> temp >> start_min;

    int start = start_hour*60+start_min;
    
    int ans = 0;
    
    for(int i=60*5; i<60*24; i++) {
        if((i-60*5)%b == 0){
            if(i<start+ta && i+tb > start)
                ans++;
        }
    }
    

    cout << ans << endl;
    
    return 0;
}