#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n, k, a, b;
ll x[200001];
ll y[200001];

ll dis(ll start, ll end)
{
    if (start < k && end < k)
        return 0;
    else
        return abs(x[start] - x[end]) + abs(y[start] - y[end]);
}
ll solve()
{
    if (!k)
        return dis(a, b);
        
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin>>n>>k>>a>>b;
        for (ll i = 0; i < n; i++)
            cin>>x[i]>>y[i];
        cout<<solve()<<endl;
        
    }
    return 0;
}