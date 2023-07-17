#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define sz(x) (x).size()
#define frn(i, n) for(ll i=0;i<n;i++)

int main() {
	int t; cin>>t;
	while(t--){
	    int n;string a,b; cin>>n>>a>>b;
	    
	    set<char> s;
	    frn(i,n){
	        if(b[i]!=a[i])
	            s.insert(b[i]);
	    }
	    
	    cout<<sz(s)<<endl;
	}
	return 0;
}