#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n+1];
	for(int i=1; i<=n; i++) {
		cin >> a[i];
	}
	vector<int> err;
	for(int i=1; i<n; i++) {
		if(i%2==1) {
			if(a[i+1] <= a[i]) {
				err.push_back(i);
			}
		} else {
			if(a[i+1] >= a[i]) {
				err.push_back(i);
			}
		}
	}
	int ans = 0;
	if(err.size()==1) {
		int up,down;
		down = a[err[0]-1];
		up = a[err[0]+1];

		for(int i=1; i<n; i++) {
			if(err[0]%2==1) {
				if(a[i]<down && a[i]<up)
					ans++;
			} else {
				if(a[i]>down && a[i]>up)
					ans++;
			}
		}

	}else if(err.size()==2) {
		int temp = a[err[0]];
		a[err[0]] = 1;


	}
	return 0;
}