#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	for(int i=0; i<n; i++) {
		int in;
		cin >> in;
		if(in==0) {
			cout << "Case #" << i+1 << ": INSOMNIA" << endl;
			continue;
		}
		int a[10] = {0};
		int cnt = 0;
		int ans = 0;
		for(int j=1; cnt<10; j++) {
			int temp = j*in;
			ans = temp;
			while(temp!=0) {
				if(a[temp%10] == 0) {
					a[temp%10] = 1;
					cnt++;
				}
				temp/=10;
			}
		}
		cout << "Case #" << i+1 << ": " << ans << endl;
	}
	return 0;
}