#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	for(int j=0; j<n; j++){
		string input;
		cin >> input;
		int ans = 0;
		int plus = 0;
		int minus = 0;
		if(input[0] == '+')
			plus++;
		for(int i=1; i<input.length(); i++) {
			if(input[i] == '+')
				plus++;
			if(input[i]=='+' && input[i-1]=='-'){
				ans+=1;
			}else if(input[i]=='-' && input[i-1] == '+') {
				ans+=1;
			}
		}
		if(input[input.length()-1] == '-')
			ans++;
		if(plus==input.length())
			cout << "Case #" << j+1 << ": " <<  "0" << endl;
		else
			cout << "Case #" << j+1 << ": " << ans << endl;

	}
	return 0;
}