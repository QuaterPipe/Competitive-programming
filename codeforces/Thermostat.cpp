#include <bits/stdc++.h>
using namespace std;
int main()
{
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        int l, r, x, a, b;
        cin>>l>>r>>x;
        cin>>a>>b;
        if (a == b)
        {
            cout<<0<<"\n";
            continue;
        }
        if (b > a && a - x < l)
        {
            cout<<-1<<"\n";
            continue;
        }
        auto withinBounds = [&](int left, int right, int val) -> bool {
            return left <= val && val <= right;
        };
        int sign = a > b ? -1 : 1;
        if (withinBounds(l, r, a + (x + abs(a - b)) * sign))
        {
            std::cout<<2<<"\n";
            continue;
        }
        std::cout<<"idk\n";
    }
    return 0;
}