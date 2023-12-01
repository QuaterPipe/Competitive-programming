#include <bits/stdc++.h>
using namespace std;
int main()
{
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        int n, k;
        cin>>n>>k;
        int count = 0;
        for (int i = 0; i < n / 2; i++)
        {
            for (int j = 0; j < n / 2; j++)
            {
                int q, r;
                r = i + j;
                q = r + j;
                for (int i = 0; i < k - 2; i++)
                {
                    int t;
                    t = q;
                    q = q + r;
                    r = t;
                    if (i == k - 3 && q == k)
                    {
                        count++;
                        break;
                    }
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}