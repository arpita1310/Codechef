#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	std::cin >> t;
	while(t--){
	int n, ans=0;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
	    cin>> a[i];
	}
	for(int i=0; i<n; i++){
	   ans^=a[i];
	}
	std::cout << ans << std::endl;
	}
	return 0;
}