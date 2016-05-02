#include <iostream>
#include <vector>
#include <map>
#include <cstring>
using namespace std;


struct UNFD {

    int par[1000000];

    void init() {
	for(int i=0; i<1000000; i++) {
	    par[i] = -1;
	}
    }

    int root(int x) {
	if(par[x] < 0) {
	    return x;
	}else {
	    return par[x] = root(par[x]);
	}
    }

    void merge(int x, int y) {
	x = root(x);
	y = root(y);

	if(x!= y) {
	    if(par[x] > par[y])
		swap(x,y);
	    par[x]+=par[y];
	    par[y] = x;
	}
    }

};


UNFD u;

int used[1000000];

int main() {


    for(int i=0;; i++) {
	int from, to;
	int flag = 0;
	u.init();
	int cnt = 0;
	int node = -1;
	map<int,int> mp;
	memset(used,0,sizeof(used));
	while(cin >> from >> to) {
	    if(from == -1 && to == -1)
		return 0;
	    if(from == 0 && to ==0) break;
	    if(mp[from] == 0){
		mp[from] = 1;
		cnt++;
	    }
	    if(mp[to] == 0){
		mp[to] = 1;
		cnt++;
		node = to;
	    }
	    if(u.root(from) == u.root(to) || used[to])
		flag = 1;
	    u.merge(from,to);
	    used[to] = 1;
	}
	if(node!=-1 && u.par[u.root(node-1)]*-1 != cnt)
	    flag = 1;
	if(flag) 
	    cout << "Case " << i+1 << " is not a tree." << endl; 
	else 
	    cout << "Case " << i+1 << " is a tree." << endl; 
    }

    return 0;
}
