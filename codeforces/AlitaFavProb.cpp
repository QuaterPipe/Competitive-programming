#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        char biggest = -1;
        for (char c: s)
            biggest = max(c, biggest);
        cout<<(biggest - 96)<<"\n";
    }
}