#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,m,k,count=0,count1=0;
	    cin>>n>>m>>k;
	    int a[n];
	    for (int i = 0; i < n; i++) {
	        cin>>a[i];
	    }
	    for (int i = 0; i < n; i++) {
	       if(i<m){
	           if(a[i]==1)
	           count++;
	       }
	       else{
	           if(a[i]==1)
	           count1++;
	       }
	}
	if(count==m){
	    if((count1+count)==n)
	    std::cout << 100 << std::endl;
	    else
	    std::cout << k << std::endl;
	}
	else{
	    std::cout << 0 << std::endl;
	}
	
	
	}
	return 0;
}