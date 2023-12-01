#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(false);
    ll n;
    cin >> n;
    cout<<n<<" ";
    while (n != 1)
    {
        if (n % 2)
            n = n * 3 + 1;
        else
            n = n / 2;
        cout<<n<<" ";
    }
    return 0;
}