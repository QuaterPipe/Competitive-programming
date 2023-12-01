#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(false);
    int t;
    cin >> t;
    ll x, y;
    while (t--)
    {
        cin>>y>>x;
        ll m = max(x, y);
        pair<ll, ll> nearestSqr(1, 1);
        if (m % 2ULL)
            nearestSqr.first = m;
        else
            nearestSqr.second = m;
        cout<<((m * m) - abs(y - nearestSqr.second) - abs(x - nearestSqr.first))<<endl;
    }
    return 0;
}