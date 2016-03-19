#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,b;
	cin >> n >> b;
	queue<long long int> q;
	vector<long long int> ans;
	long long int sum = 0;
	long long int minus = 0;
	while(n--) {
		int t,d;
		cin >> t >> d;
		while(q.size()!=0 && q.front()<=t) {
			ans.push_back(q.front());
			if(q.front()==-1){
				minus--;
			}
			q.pop();
		}
		//printf("t: %d front: %d\n",t,q.front());
		if(q.size()-minus<=b) {
			if(t>sum) {
				q.push(t+d);
				sum = t+d;
			}
			else {
				q.push(sum+d);
				sum+=d;
			}
		}else {
			q.push(-1);
			minus++;
		}

	}

	while(q.size()!=0) {
		ans.push_back(q.front());
		q.pop();
	}

	for(int i=0; i<ans.size(); i++) {
		cout << ans[i];
		printf("%c",i==ans.size()-1 ? '\n' : ' ');
	}


	return 0;
}