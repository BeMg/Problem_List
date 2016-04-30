#include <bits/stdc++.h>
using namespace std;

int main() {
    int test_case;
    while(cin >> test_case) {
        while(test_case--) {
            int table[6] = {0};
            int temp;
            for(int i=0; i<4; i++) {
                cin >> temp;
                table[temp-1]++;
            }
            int ans = 0;
            int flag = 1;
            int record;
            /*
            for(int i=0; i<6; i++) {
                printf("%d%c",table[i], i==5 ? '\n' : ' ');
            }
            */
            for(int i=0; i<6; i++) {
                if(table[i] == 3) {
                    flag = 3;
                    break;
                } else if(table[i] == 2 && flag == 1) {
                    flag = 2;
                    record = table[i]*2;
                } else if(table[i] == 1) {
                    ans+=(i+1);
                } else if(table[i] == 2 && flag == 2) {
                    if(record >= (i+1)*2) {
                        ans = record;
                    } else {
                        ans = (i+1)*2;
                    }
                    break;
                } else if(table[i] == 4 ) {
                    flag = 4;
                    break;
                }
            }
            //cout << "flag: " << flag << endl;
            if(flag == 1) {
                cout << "R" << endl;
            } else if(flag == 2) {
                cout << ans << endl;
            } else if(flag == 3) {
                cout << "R" << endl;
            } else if(flag == 4) {
                cout << "WIN" << endl;
            }
        }
    }

    return 0;
}