#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(false);
    ll n;
    cin>>n;
    if (((n * (n + 1)) / 2) % 2)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    cout<<"YES"<<endl;
    if (n % 2)
    {
        ll iters = (((n * (n + 1)) / 4) / n) - 1;
        cout<<(iters * 2 + 1)<<endl;
        for (ll i = 1; i <= iters; i++)
            cout<<i<<" "<<(n - i)<<" ";
        cout<<n<<endl;
        cout<<(iters * 2 + 2)<<endl;
        for (ll i = iters + 1; i <= (n - 1) / 2; i++)
            cout<<i<<" "<<(n - i)<<" ";
        cout<<endl;
    }
    else
    {
        cout<<(n / 2)<<endl;
        for (int i = n / 4 + 1; i <= n - (n / 4); i++)
            cout<<i<<" ";
        cout<<endl<<(n / 2)<<endl;
        for (int i = 1; i <= n / 4; i++)
            cout<<i<<" ";
        for (int i = n - (n / 4) + 1; i <= n; i++)
            cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}