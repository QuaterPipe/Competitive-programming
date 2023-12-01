#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(false);
    ll n;
    cin>>n;
    ll result = 1;
    for (int i = 0; i < n; i++)
    {
        result = (result * 2) % (1000000007LL);
    }
    cout<<result<<endl;
    return 0;
}