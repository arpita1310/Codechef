#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int A,B;
	    cin>>A>>B;
	    if(A<B){
	        cout<<A<<endl;
	    }
	    else{
	        cout<<B<<endl;
	    }
	}
	return 0;
}
