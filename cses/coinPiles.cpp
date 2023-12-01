#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--)
    {
        int a, b;
        cin>>a>>b;
        while (b != a)
        {
            if (b < 0 || a < 0)
                break;
            if (b > a)
            {
                b -= 2;
                a -= 1;
            }
            else
            {
                a -= 2;
                b -= 1;
            }
        }
        if (b < 0 || a < 0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        if (b % 3 == 0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
    return 0;
}