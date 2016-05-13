#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int n;
    cin >> n;
    while(n--) {
	
	int a[4];

	for(int i=0; i<4; i++){
	    cin >> a[i];
	}
    
	sort(a,a+4);

	cout << min(a[0]*1+a[1]*3+a[3]*1,a[0]*2+a[1]+a[2]+a[3]) << endl;


    }

    return 0;

}
