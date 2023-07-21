#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int mon,pizz,burg;
	    cin>>mon>>pizz>>burg;
	    if(mon>=pizz&&mon>=burg){
	        cout<<"PIZZA"<<endl;
	    }
	    else if(mon>=burg&&mon<=pizz){
	        cout<<"BURGER"<<endl;
	    }
	    else if(mon>=pizz&&mon<=burg){
	        cout<<"PIZZA"<<endl;
	    }
	    else if (mon<=burg&&mon<=pizz){
	    cout<<"NOTHING"<<endl;
	    }
	}
	return 0;
}