#include <iostream>
using namespace std;

int main() {
    int t,x,y;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>x;
        if(x>=80){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}