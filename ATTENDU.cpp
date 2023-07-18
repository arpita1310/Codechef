#include <iostream>
#include <map>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--) {
	    int n;
	    cin>> n;
	    string f[n], l[n];
	    map<string, int> m;
	    
	    for (int i = 0; i <n; i++) {
	        cin>> f[i] >> l[i];
	        m[f[i]]++;
	    }
	    
	    for (int i = 0; i < n; i++) {
	        if (m[f[i]] > 1) cout<< f[i] <<" "<< l[i] <<endl;
	        else cout<< f[i] <<endl;
	    }
	}
	return 0;
}
