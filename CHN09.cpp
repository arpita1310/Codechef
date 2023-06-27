#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	string s;
	while(t--){
	    cin>>s;
	    int freq[2] = {0};
	    for(int i=0; s[i] != '\0'; i++){
	        freq[s[i] - 'a']++;
	    }
	    int mx = min(freq[0], freq[1]);
	    cout<<mx<<endl;
	}
	return 0;
}