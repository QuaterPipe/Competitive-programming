#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
ll dp[200001];
 
ll factorial(ll n)
{
    if (n < 200000 && dp[n])
        return dp[n];
    else if (n > 0 && n < 200000)
    {
        ll x = (n * factorial(n - 1)) % 998244353;
        dp[n] = x;
        return x;
    }
}
 
void solve()
{
    string s;
    cin>>s;
    vector<pair<ll, ll>> groups;
    int len = 1;
    int ind = 0;
    int count = 0;
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] == s[i - 1])
        {
            count++;
            if (len == 1)
                ind = i - 1;
            len++;
        }
        else if (len > 1)
        {
            groups.push_back(pair<ll, ll>(ind, len));
            len = 1;
        }
    }
    if (len > 1)
    {
        groups.push_back(pair<int, int>(ind, len));
        len = 1;
    }
    int sum = 1;
    for (int i = 0; i < groups.size(); i++)
        sum = (sum * groups[i].second) % 998244353;
    sum = (sum * 1LL * factorial(count)) % 998244353;
    cout<<count<<" "<<sum<<endl;
 
}
int main()
{
    fill_n(dp, 10001, 0);
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}