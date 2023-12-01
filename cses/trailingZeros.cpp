#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(false);
    ll n;
    cin>>n;
    ll count = 0;
    for (ll i = n - (n % 5);i != 0; i -= 5)
    {
        int x = i;
        while (x % 5 == 0 && x > 0)
        {
            x /= 5;
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}