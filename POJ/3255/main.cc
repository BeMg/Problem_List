#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct edge{
    int to,cost;
};

vector<edge> G[5000+30];

int N,R;

typedef pair<int,int> P;


int dist[100000];
int dist2[100000];

const int INF = 0x3f3f3f3f;

void dijkstra() {
    
    priority_queue<P, vector<P>, greater<P> > q;

    fill(dist,dist+N+50, INF);
    fill(dist2,dist2+N+50, INF);


    dist[0] = 0;
    q.push(P(0,0));

    while(!q.empty()) {
	
	P p = q.top(); q.pop();

	int v = p.second;
	int d = p.first;

	if(dist[v] < d)continue;

	for(int i=0; i<G[v].size(); i++) {
	    edge &e = G[v][i];
	    int d2 = d + e.cost;

	    if(dist[e.to] > d2) {
		swap(dist[e.to], d2);
		q.push(P(dist[e.to],e.to));
	    }

	    if(dist2[e.to] > d2 && dist[e.to] < d2) {
		dist2[e.to] = d2;
		q.push(P(dist2[e.to],e.to));
	    }
	}

    }


}



int main() {
    
    cin >> N >> R;

    for(int i=0; i<R; i++) {
	
	int from, to, cost;
	cin >> from >> to >> cost;
	from--;
	to--;
	
	edge t;
	t.to = to;
	t.cost = cost;

	G[from].push_back(t);
	t.to = from;
	G[to].push_back(t);
    }



    dijkstra();
    
    cout << dist2[N-1] << endl;


    return 0;
}
