#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,m,k;
	    cin>>n>>m>>k;
	    int s[n];
	    for(int i=0;i<n;i++){
	        cin>>s[i];
	    }
	    int a=m-s[n-1]+1;
	    if(a>=k) cout<<"yes\n";
	    else cout<<"no\n";
	    
	}
  return 0;
}