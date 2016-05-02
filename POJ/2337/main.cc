#include <iostream>
#include <vector>
#include <string>
using namespace std;


vector<int> G[1000+1];

int main() {
    int N;
    cin >> N;

    while(N--) {
	int num;
	cin >> num;
	vector<string> v; 
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

	for(int i=0; i<num; i++) {
	    for(int j=0; j<G[i].size(); j++) {
		cout << G[i][j] << " ";
	    }
	    cout << endl;
	}

    }

    return 0;
}
