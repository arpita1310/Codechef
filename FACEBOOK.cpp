#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        long long int N,mx=0,A[100000],B[100000], mx1=0,k=0;
        cin>>N;
        for(int i=0; i<N; i++) cin>>A[i];
        for(int i=0; i<N; i++) cin>>B[i];

        for(int i=0; i<N; i++)
        {
            if(mx<A[i])
            {
                mx=A[i];
                mx1=B[i];
                k=i;
            }
            else if(mx==A[i])
            {
                if(mx1<B[i]){
                        mx1=B[i];
                        k=i;
                }
            }
        }
        cout<<k+1<<endl;
    }
}
