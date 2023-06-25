#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--) {
	    int n, a;
	    cin>> n;

	    for (int i=0; i<n; i++) {
	        cin>> a;
	        cout<< 1-a <<" ";
	    }
	    
	    cout<<endl;
	}
	return 0;
}