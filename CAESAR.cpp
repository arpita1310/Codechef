#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    string s,t,u;
	    int sum(0);
	    cin>>s>>t>>u;
	    for(int i=0;i<n;i++){
	        if(s[i]<=t[i]) sum=t[i]-s[i];
	        else sum=26 - (s[i]-t[i]);
	        char p;
	        if(u[i]+sum<=122) p=char(u[i] + sum);
	        else  p=char(u[i] + sum - 26);
	        cout<<p;
	        sum=0;
	    }
	    cout<<endl;
	}
	return 0;
}