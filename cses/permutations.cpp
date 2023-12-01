#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(false);
    int n;
    cin >> n;
    if (n <= 3 && n != 1)
    {
        cout<<"NO SOLUTION\n";
        return 0;
    }
    int i;
    for (i = 2; i <= n; i += 2)
        cout<<i<<" ";
    for (i = 1; i <= n; i += 2)
        cout<<i<<" ";
    cout<<endl;
    return 0;
}