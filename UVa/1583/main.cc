#include <cstdio>

int generator(int m) {
        int ans=0;
        ans = m;
        while(m!=0) {
                ans+=m%10;
                m/=10;
        }
        return ans;
}

//Create table for not TLE.
int table[100000+500] = {};


int main() {
        int n;
        //Get ans for all range.
        for(int i=100000; i>=0; i--) {
                table[generator(i)] = i;
        }
        while(scanf("%d",&n)!=EOF) {
                while(n--) {
                        int m;
                        scanf("%d",&m);
                        printf("%d\n",table[m]);
                }
        }
        return 0;
}
