#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;

int num;

vector<int> G[1000+1];

int ans[1000+1];
int used[1000+1];


int DFS(int v, int cnt) {

    if(cnt == num-1) return 1;

    used[v] = 1;
    ans[cnt] = v;

    for(int i=0; i<G[v].size(); i++) {
        if(used[G[v][i]] == 0) {
            int x = DFS(G[v][i], cnt+1);
            if(x == 1) return 1;
        }
    }

    used[v] = 0;

    return 0;
}


int main() {
    int N;
    cin >> N;

    while(N--) {
        cin >> num;
        vector<string> v;
        memset(ans,0,sizeof(ans));
        memset(used,0,sizeof(used));
        for(int i=0; i<1000+1; i++) {
            G[i].clear();
        }
        for(int i=0; i<num; i++) {
            string temp;
            cin >> temp;
            v.push_back(temp);
        }

        for(int i=0; i<num; i++) {
            char e = v[i][v[i].length()-1];
            for(int j=0; j<num; j++) {
                if(i==j)continue;
                char s = v[j][0];
                if(s == e)
                    G[i].push_back(j);
            }
        }
        /*
        for(int i=0; i<num; i++) {
            for(int j=0; j<G[i].size(); j++) {
        	cout << G[i][j] << " ";
            }
            cout << endl;
        }
        */
        
        int flag = DFS(0,0);
        

        if(!flag) {

            cout << "***" << endl;

        } else {

			for(int i=0; i<num; i++) {
				cout << v[ans[i]];
				if(i==num-1)
					cout << endl;
				else 
					cout << ".";
			}

        }

        /*
        for(int i=0; i<num; i++) {
        	cout << ans[i] << " ";
        }
        cout << endl;
        */



    }

    return 0;
}
