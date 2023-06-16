#include<bits/stdc++.h>
#define ll long long 
#define endl "\n"
// constant
const int mod = 1e9+7;
using namespace std;
 
int main(){
    int t;  cin>>t;
    while(t--){
        int n, b;  cin>>n>>b;
        int a[n];
        int AND= -1;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if((a[i] & b) == b){
                AND = AND & a[i];
            }
        }
        if(AND==b){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }   
    }
    return 0;
}