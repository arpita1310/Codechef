#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;
        
        string s;
        cin >> s;
        
        ll t1 = 0, t2 = 0;
        if (s[0] == 'A')
        {
            t1++;
        }
        for (ll i = 1; i < n; i++)
        {
            if (s[i] == 'A')
            {
                if (s[i - 1] == 'A')
                {
                    t1++;
                }
            }
            else
            {
                if (s[i - 1] == 'B')
                {
                    t2++;
                }
            }
        }
        cout << t1 << " " << t2 << "\n";
    }

    return 0;
}