#include <iostream>
using namespace std;

int main() {
	int r;
	cin>>r;
	if(r<=50 && r>0){
	    cout<<100<<endl;
	}
	else if(r>50 && r<101){
	    cout<<50<<endl;
	}
	else{
	    cout<<0<<endl;
	}
	return 0;
}
