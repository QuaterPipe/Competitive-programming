#include <bits/stdc++.h>
using namespace std;
int t, n, m, k;

bool solve(void)
{
    if (n % 2 == m % 2 && n % 2 == 0)
    {
        return k % 2 == 0;
    }
    if (n % 2 != 0)
    {
        if (k < (m / 2))
            return false;
        return (k - (m / 2)) % 2 == 0;
    }
    if (m % 2 != 0)
    {
        if (k % 2 != 0)
            return false;
        if (ceil((double) k / (double) n) * 2 > (m - 1))
            return false;
    }
    return true;
}

int main(void)
{
    cin.tie(NULL);
    cin>>t;
    while (t--)
    {
        cin>>n>>m>>k;
        if (solve())
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}