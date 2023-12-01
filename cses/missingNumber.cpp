#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool values[200002];

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(false);
    int n;
    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
        int x;
        cin >> x;
        values[x] = true;
    }
    for (int i = 1; i < n + 1; i++)
    {
        if (!values[i])
        {
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}