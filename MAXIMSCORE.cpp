#include <bits/stdc++.h>
#include<limits.h>
#include<algorithm>

#define ll long long
#define for(n) for(i=0; i<n; i++)
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n,i;
        cin >> n;
        int a[n];
        
        for(n){
            cin >> a[i];
        }
        
        int x; int mn = INT_MAX; int index = 0;
        for(n){
            if(i == 0){
                x = max(abs(a[i+1]-a[i]), 0);
            }
            else if(i == n-1){
                x = max(abs(a[i]-a[i-1]), 0);
            }
            else x = max(abs(a[i]-a[i-1]) , abs(a[i]-a[i+1]));;
            if(x < mn){
                mn = x;
            }
        }
        cout<<mn<<endl;
    }
    
    return 0;
}

