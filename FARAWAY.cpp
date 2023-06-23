#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long n,m,sum=0;
	    cin>>n>>m;
	    long a[n];
	    for(int i=0;i<n;++i){
	        cin>>a[i];
	    }
	    for(int i=0;i<n;++i){
	        sum += max(abs(a[i]-1),abs(m-a[i]));
	    }
	    cout<<sum<<endl;
	}
	return 0;
}