#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(false);
    string s;
    cin>>s;
    int curr = 1;
    int longest = 1;
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] == s[i - 1])
        {
            curr++;
            longest = max(curr, longest);
        }
        else
        {
            curr = 1;
        }
    }
    cout<<longest<<endl;
    return 0;
}