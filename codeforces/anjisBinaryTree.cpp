#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct node
{
    int l = 0, r = 0;
    char val = 0;
    node() {}
    node(int l, int r, char val)
        : l(l), r(r), val(val) {}
};

int dp[300001];
node nodes[300001];

int dfs(int ind, int sum)
{
    if (!nodes[ind].l && !nodes[ind].r)
        return sum;
    if (nodes[ind].val == 'U')
    {
        sum++;
        int m = std::numeric_limits<int>::max();
        if (nodes[ind].l)
            m = dfs(nodes[ind].l, sum);
        if (nodes[ind].r)
            m = min(m, dfs(nodes[ind].r, sum));
        return m;
    }
    if (nodes[ind].val == 'L')
    {
        int m = std::numeric_limits<int>::max();
        if (nodes[ind].l)
            m = dfs(nodes[ind].l, sum);
        if (nodes[ind].r)
            m = min(m, dfs(nodes[ind].r, sum + 1));
        return m;
    }
    if (nodes[ind].val == 'R')
    {
        int m = std::numeric_limits<int>::max();
        if (nodes[ind].l)
            m = dfs(nodes[ind].l, sum + 1);
        if (nodes[ind].r)
            m = min(m, dfs(nodes[ind].r, sum));
        return m;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        for (int i = 0; i < n; i++)
        {
            int l, r;
            cin>>l>>r;
            nodes[i] = node(max(0, l - 1), max(0, r - 1), s[i]);
        }
        int x = dfs(0, 0);
        cout<<x<<"\n";
    }
    return 0;
}