#include <queue>
#include <iostream>
#include <vector>
using namespace std;

typedef pair<int, int> pii;

struct edge{int to, int cost};

int N,M;

vector<pii> G[5000+1];
int d[5000+3];


const int INF = 1e9;

int main() {
    cin >> N >> M;
    for(int i=0; i<M; i++) {
        
        int cost, from, to;
        cin >> from >> to >> cost;
        fill(d,d+M,INF);
        
        
        pii temp;
    
        temp.first = cost;
        temp.second = to;
        
        G[from].push_back(temp);
        
        temp.second = from;
        
        G[to].push_back(temp);
        
        
        
        
    
    }
}