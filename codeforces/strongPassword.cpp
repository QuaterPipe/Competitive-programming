#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string database, l, r;
        cin>>database;
        int m;
        cin>>m;
        cin>>l>>r;
        int mx = 0;
        for (int i = 0; i < m; i++)
        {
            int li = l[i] - '0';
            int ri = r[i] - '0';
            int nmx = mx;
            for (int j = li; j < ri + 1; j++)
            {
                int cur = mx;
                while (cur < database.length() && (database[cur] - '0') != j)
                    cur++;
                nmx = max(nmx, cur);
            }
            mx = nmx + 1;
        }
        if (mx > database.length())
            cout<<"YES\n";
        else
            cout<<"NO\n";

    }
    return 0;
}