#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n, x;
ll a[200001];

ll area(ll h)
{
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] >= h)
            break;
        sum += h - a[i];
    }
    return sum;
}

ll solve()
{
    sort(a, a + n);
    if (x > area(a[n - 1]))
    {
        ll tmp = area(a[n - 1]);
        return a[n - 1] + ((x - tmp) / n);
    }
    ll start = 0, end = a[n - 1];
    ll best = -1;
    while (start < end)
    {
        if (start == (end - 1))
        {
            best = x < area(end) ? best : end;
            best = area(start) > area(best) ? start : best;
            return best;
        }
        ll mid = start + (end - start) / 2;
        ll ar = area(mid);
        if (ar == x)
            return mid;
        if (ar > x)
        {
            end = mid;
        }
        if (ar < x)
        {
            best = max(best, mid);
            start = mid;
        }

    }
    return best;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        cin>>n>>x;
        for (ll i = 0; i < n; i++)
            cin>>a[i];
        cout<<solve()<<endl;
    }
    return 0;
}