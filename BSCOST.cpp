#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x,y;
	    cin>>n>>x>>y;
	    char a[n];
	    int ones=0,zeros=0;
	    for(int i=0;i<n;++i){
	        cin>>a[i];
	        if(a[i]=='1') ones++;
	        else if(a[i]=='0') zeros++;
	    }
	    if(ones ==n || zeros ==n) cout<<0<<endl;
	    else if(x>y) cout<<y<<endl;
	    else cout<<x<<endl;
	    
	}
	return 0;
}