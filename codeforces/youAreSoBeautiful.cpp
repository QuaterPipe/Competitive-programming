#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll a[100000];
ll b[100000];
ll sfx[100000];

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        memset(b, 0, sizeof(b));
        memset(sfx, 0, sizeof(sfx));
        ll n;
        cin>>n;
        for (ll i = 0; i < n; i++)
            cin>>a[i];
        set<ll> traversed;
        for (ll i = n - 1; i >= 0; i--)
        {
            if (traversed.find(a[i]) == traversed.end())
            {
                b[i] = 1;
                traversed.insert(a[i]);
            }
        }
        sfx[n - 1] = b[n - 1];
        for (ll i = n - 1; i > 0; i--)
            sfx[i - 1] = sfx[i] + b[i - 1];
        traversed.clear();
        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            if (traversed.find(a[i]) == traversed.end())
            {
                sum += sfx[i];
                traversed.insert(a[i]);
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}