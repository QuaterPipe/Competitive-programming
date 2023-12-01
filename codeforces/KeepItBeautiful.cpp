#include <bits/stdc++.h>
using namespace std;
int main()
{
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        int q;
        cin >> q;
        int first, prev;
        cin >> first;
        prev = first;
        cout<<1;
        bool second = false;
        for (int i = 1; i < q; i++)
        {
            int x;
            cin >> x;
            if (prev > x && !second)
            {
                if (x > first)
                {
                    cout<<0;
                        continue;
                }
                second = true;
                prev = x;
                cout<<1;
                continue;
            }
            if (second)
            {
                if (prev > x && x != first)
                    cout<<0;
                else if (x > first)
                    cout<<0;
                else
                {
                    cout<<1;
                    prev = x;
                }
                continue;
            }
            prev = x;
            cout<<1;
        }
        cout<<endl;
    }
    return 0;
}