#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int books[1001][2];
int dp[1001][100001];

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(false);
    int n, x;
    cin>>n>>x;
    for (int i = 0; i < n; i++)
        cin>>books[i][0];
    for (int i = 0; i < n; i++)
        cin>>books[i][1];
    dp[0][0] = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < x; j++)
        {
            // case where we take one book
            dp[i][j] = max(dp[i][j])
            if (i - 1 >= 0 && j - 1 >= 0)
            {
                dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j - books[i][0]] + books[i][1]);

            }
        }
    }
    cout<<dp[x - 1]<<endl;
    return 0;
}