#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int solve()
{
    int n;
    string s, t;
    cin>>n;
    cin>>s>>t;
    int count = 0, revCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == t[i])
            count++;
        if (s[n - i - 1] == t[i])
            revCount++;
    }
    if (count == n)
        return 0;
    if (revCount == n)
        return 2;
    int minChanges = n - max(count, revCount);
    if (count == revCount)
        return (2 * minChanges) - 1;
    bool reversed = !((minChanges + (int)(revCount > count)) % 2) ;
    return minChanges + (minChanges - 1) + (int)reversed;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cout<<solve()<<endl;
    }
    return 0;
}