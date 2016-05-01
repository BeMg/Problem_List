#include <iostream>
#include <vector>
using namespace std;

const int MAX_SPACE = 100000+5;

struct UNFD{

    int par[10000];

    void init() {
	for(int i=0; i<10000; i++) {
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

	if(x!=y) {
	    if(par[x] > par[y])
		swap(x,y);
	    par[x]+=par[y];
	    par[y] = x;
	}
    }
};


vector< pair<int, int> > c;

int dist( pair<int, int> a, pair<int, int> b) {
    int x = a.first - b.first;
    int y = a.second - b.second;

    return x * x + y * y;
}

int main() {

    UNFD u;
    u.init();
    
    int check[100000];

    int N,d;
    
    cin >> N >> d;

    for(int i=0; i<N; i++) {
	pair<int, int> temp;
	int x,y;
	
	cin >> x >> y;

	temp.first = x;
	temp.second = y;
	
	c.push_back(temp);
    }

    char mode, num;

    while(cin >> mode){
	if(mode == 'S') {
	    int a,b;
	    cin >> a >> b;
	    if(u.root(a-1) == u.root(b-1)){
		cout << "SUCCESS" << endl;
	    }else {
		cout << "FAIL" << endl;
	    }
	}else {
	    int t;
	    cin >> t;
	    check[t-1] = 1;
	    for(int i=0; i<N; i++) {
		if( (t-1)!=i && check[i] && dist(c[t-1],c[i]) <= d*d){
		    u.merge(t-1,i);
		}
	    }
	}
    }


    return 0;
}
