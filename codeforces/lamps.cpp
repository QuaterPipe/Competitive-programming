#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll solve(ll n)
{
    vector<vector<ll>> lamps(n);
    for (ll i = 0; i < n; i++)
    {
        ll a, b;
        cin>>a>>b;
        lamps[a - 1].push_back(b);
    }
    ll score = 0;
    for (ll i = 0 ; i < n; i++)
    {
        sort(lamps[i].rbegin(), lamps[i].rend());
        for (ll j = 0; j < min((ll)lamps[i].size(), i + 1); j++)
            score += lamps[i][j];
    }
    return score;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll x = solve(n);
        cout << x << endl;
    }
    return 0;
}