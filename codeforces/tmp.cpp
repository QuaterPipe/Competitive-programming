#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int arr[100001];
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin>>n>>k;
        for (int i = 0; i < n; i++)
            cin>>arr[i];
        for (int x = 1; x <= k; x++)
        {
            bool found = false;
            int l = -1;
            int r = -1;
            for (int i = 0; i < n; i++)
            {
                if (arr[i] == x)
                    found = true;
                if (l == -1 && arr[i] >= x)
                    l = i;
                if (r == -1 && arr[n - i - 1] >= x)
                    r = n - i - 1;
            }
            if (l == -1 || r == -1 || !found)
            {
                cout<<0<<" ";
                continue;
            }
            cout<<r<<" : "<<l<<"\n";
            int val = (r - l + 1) * 2;
            cout<<val<<" ";
        }
    }
    return 0;
}