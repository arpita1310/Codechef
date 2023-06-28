#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int a[n];
	    vector<int> count(n+1,0);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            count[a[i]]++;
        }
        sort(count.begin(),count.end());
        int max = count[n];
	    cout<<n-max<<endl;
	}
	return 0;
}