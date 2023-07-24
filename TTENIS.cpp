#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int win=0,lose=0;
	    for(int i=0;i<s.length();++i){
	        if(s[i]=='1') {
	            win++;
	        }
	        else {
	            lose++;
	        }
	        if(win>=11 && win-lose>=2) cout<<"WIN"<<endl;
	        else if(lose>=11 && lose-win>=2) cout<<"LOSE"<<endl;
	    }
	}
	return 0;
}