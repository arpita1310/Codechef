#include <bits/stdc++.h>
using namespace std;
#define fastIO cin.tie(0)->sync_with_stdio(0)

int main() {
    fastIO;
	// your code goes here
	int tc;
	cin>>tc;
	while(tc--) {
	    int x, y;
	    cin>>x>>y;
	    cout << std::min(3*x, 2*y);
	    cout << "\n";
	}
	return 0;
}