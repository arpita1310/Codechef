#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    int n;
	    cin >> n;
	    unordered_set<int> frnds;
	    int frnd;
	    for(int i=0;i<n;i++) {
	        cin >> frnd;
	        frnds.insert(frnd);
	    }
	    cout << frnds.size() << endl;
	    frnds.clear();
	}
	return 0; 
}