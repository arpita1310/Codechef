#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i = 0; i < t; i++)
	{
	    int n;
	    unordered_map<string, int> m;
	    cin>>n;
	    for(int k =0; k<n; k++)
	    {
	        string doll;
	        cin>>doll;
	        m[doll]++;
	    }
	    for(auto& pair: m)
	    {
	        if(pair.second % 2 != 0)
	        {
	            cout<<pair.first<<endl;
	            break;
	        }
	    }
	}
	return 0;
}