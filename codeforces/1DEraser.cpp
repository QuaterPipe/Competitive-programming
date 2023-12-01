#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin>>n>>k;
        string s;
        cin>>s;
        vector<int> nums(n), pref(n);
        for (int i = 0; i < n; i++)
            nums[i] = s[i] == 'W' ? 0 : 1;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i])
            {
                count += 1;
                i += (k - 1);
            }
        }
        cout<<count<<endl;
    }
    return 0;
}