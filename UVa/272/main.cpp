#include <bits/stdc++.h>
using namespace std;

int main() {
	char a;
	int flag = 0;
	while(scanf("%c",&a)!=EOF) {
		if(a=='"' && flag == 0) {
			cout << "``";
			flag = 1;
		} else if(a=='"' && flag == 1) {
			cout << "''";
			flag = 0;
		} else {
			cout << a;
		}
	}
	return 0;
}