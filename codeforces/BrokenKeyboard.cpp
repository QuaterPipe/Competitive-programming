#include <bits/stdc++.h>
using namespace std;
int main()
{
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        bool canType = true, isDouble = false;
        for (int i = 0; i < n; i++)
        {
            if (isDouble && ((i + 1) == n || s[i] != s[i + 1]))
            {
                canType = false;
                break;
            }
            if (isDouble && (i + 1) < n)
                i++;
            isDouble = !isDouble;
        }
        if (canType)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}