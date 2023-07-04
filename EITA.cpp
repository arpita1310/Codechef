#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	   int d,x,y,z;
	   cin>>d>>x>>y>>z;
	   int a=x*7;
	   int b=(y*d)+(z*(7-d));
	   int c=max({a,b});
	   cout<<c<<endl;
	}
	return 0;
}