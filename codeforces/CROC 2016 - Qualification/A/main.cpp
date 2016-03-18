#include <bits/stdc++.h>
using namespace std;


int main() {
	int n,a,b;
	cin >> n >> a >> b;
	if(n>a*b) {
		printf("-1\n");
		return 0;
	}
	int ans[a][b];
	memset(ans,0,sizeof(ans));
	int cnt_a = 1;
	int cnt_b = 2;

	for(int i=0; i<a; i++) {
		for(int j=0; j<b; j++) {
			if((i+j)%2==0 && cnt_a<=n) {
				ans[i][j] = cnt_a;
				cnt_a+=2;
			}else if((i+j)%2==1 && cnt_b<=n){
				ans[i][j] = cnt_b;
				cnt_b+=2;
			}
		}
	}

	for(int i=0; i<a; i++) {
		for(int j=0; j<b; j++) {
			printf("%d%c",ans[i][j],j==b-1 ? '\n' : ' ');
		}
	}

	return 0;
}