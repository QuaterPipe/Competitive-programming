#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int arr[100001];
int tmp[100001];
int prefix[100001];
int suffix[100001];

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        memset(tmp, 0, sizeof(tmp));
        memset(prefix, 0, sizeof(prefix));
        memset(suffix, 0, sizeof(suffix));
        int n, k;
        cin>>n>>k;
        set<int> all;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            all.insert(arr[i]);
        }
        for (int i = 0; i <= k; i++)
            tmp[arr[i]] = 1;
        prefix[0] = 0;
        for (int i = 1; i <= k; i++)
            prefix[i] = prefix[i - 1] + tmp[i];
        suffix[0] = 0;
        for (int i = 1; i <= k; i++)
            suffix[i] = suffix[i - 1] + tmp[k - i];
        cout<<"tmp: ";
        for (int i = 1; i <= k; i++)
            cout<<tmp[i]<<" ";
        cout<<endl<<"prefix: ";
        for (int i = 1; i <= k; i++)
            cout<<prefix[i]<<" ";
        cout<<endl<<"suffix: ";
        for (int i = 1; i <= k; i++)
            cout<<suffix[i]<<" ";
        cout<<endl;
        for (int i = 1; i <= k; i++)
        {
            if (all.find(i) == all.end())
            {
                cout<<" ";
                continue;
            }
            int val = ((suffix[i]) - (prefix[i] - 1) + 1) * 2;
            cout<<val<<" ";
        }
        cout<<endl;
    }
    return 0;
}