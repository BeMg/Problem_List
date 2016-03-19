#include <bits/stdc++.h>
using namespace std;


vector<string> v[26];
int n;
int ans = 0;

void solve(string a) {
	if(a.size()==n) {
		ans++;
		return ;
	}
	for(int i=0; i<v[a[0]-'a'].size(); i++) {
		string temp;
		temp.assign(v[a[0]-'a'][i]);
		temp.append(a.begin()+1,a.end());
		solve(temp);
	}
}

int main() {
	int q;
	cin >> n >> q;
	string temp;
	char b;
	for(int i=0; i<q; i++) {
		cin >> temp >> b;
		v[b-'a'].push_back(temp);
	}
	temp.clear();
	temp.assign("a");
	solve(temp);
	cout << ans << endl;

	return 0;
}