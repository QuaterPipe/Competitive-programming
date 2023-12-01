#include <bits/stdc++.h>
using namespace std;
int t, n, m, k;

bool rowFill()
{
    int x = k % n;
    int width = ceil((double)k / (double)n) * 2;
    cout<<x<<" "<<width<<endl;
    bool lastRowFilled = !x && (k != 0);
    // if vertical space left over is odd no vertical domino can fit
    if ((n - x) % 2 != 0 && !lastRowFilled)
        return false;
    // if there are too many horizontal dominoes
    if (width > m)
        return false;
    // edge case
    if (n == 1 && width != m)
        return false;
    // where there are empty columns but height is odd
    if (width < m && n % 2 != 0)
        return false;
    return true;
}

bool columnFill()
{
    cout<<"bruh"<<endl;
    if (m % 2 != 0)
        return false;
    int x = k % m;
    int height = ceil((double)k / (double)m);
    if (!x)
        return true;
    
    
    return true;
}


int main()
{
    cin.tie(NULL);
    cin>>t;
    while (t--)
    {
        cin>>n>>m>>k;
        if (rowFill() || columnFill())
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}