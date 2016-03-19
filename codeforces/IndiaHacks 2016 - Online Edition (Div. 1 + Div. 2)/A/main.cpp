#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	map<int,int> mp;
	for(int i=0; i<n; i++) {
		int temp;
		cin >> temp;
		mp[temp] = 1;
	}
	int flag = 0;
	for(int i=1; i<=1000; i++) {
		if(mp[i-1] && mp[i] && mp[i+1])
			flag = 1;
	}
	if(flag)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}