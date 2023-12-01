#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[200001];

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        for (int i = 0; i < n; i++)
            cin>>a[i];
        ll x = std::numeric_limits<int>::max(), y = std::numeric_limits<int>::min();
        for (int i = 0; i < n; i++)
        {
            x = min(a[i], x);
            y = max(a[i], y);
        }
        std::vector<ll> vals;
        while (x != y)
        {
            vals.push_back(x % 2);
            x = (x + vals.back()) / 2;
            y = (y + vals.back()) / 2;
        }
        cout<<vals.size()<<endl;
        for (int i = 0; vals.size() <= n && i < vals.size(); i++)
            cout<<vals[i]<<" ";
        cout<<endl;
    }
    return 0;
}