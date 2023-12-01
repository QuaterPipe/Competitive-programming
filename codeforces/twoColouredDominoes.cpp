#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

char arr[501][501];
int row[501];
int col[501];   
                      
char board[501][501];

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        memset(row, 0, sizeof(row));
        memset(col, 0, sizeof(col));
        int n, m;
        cin>>n>>m;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin>>arr[i][j];
                if (arr[i][j] == 'U' || arr[i][j] == 'D')
                    row[i]++;
                if (arr[i][j] == 'L' || arr[i][j] == 'R')
                    col[j]++;
                board[i][j] = '.';
            }
        }
        bool pass = true;
        for (int i = 0; i < n; i++)
        {
            if (row[i] % 2)
            {
                pass = false;
                break;
            }
        }
        for (int j = 0; j < m; j++)
        {
            if (col[j] % 2)
            {
                pass = false;
                break;
            }
        }
        if (!pass)
        {
            cout<<(-1)<<endl;
            continue;
        }
        // sol go thru rows and find vertical dominoes, vice versa with columns, and check if dots are odd for case where no sol
        for (int i = 0; i < n; i++)
        {
            char ups = 'W';
            for (int j = 0; j < m; j++)
            {
                if (arr[i][j] == '.' || board[i][j] != '.')
                    continue;
                if (arr[i][j] == 'U')
                {
                    board[i][j] = ups;
                    ups = ups == 'W' ? 'B' : 'W';
                    board[i + 1][j] = ups;
                }
            }
        }
        for (int j = 0; j < m; j++)
        {
            char lefts = 'W';
            for (int i = 0; i < n; i++)
            {
                if (arr[i][j] == '.' || board[i][j] != '.')
                    continue;
                if (arr[i][j] == 'L')
                {
                    board[i][j] = lefts;
                    lefts = lefts == 'W' ? 'B' : 'W';
                    board[i][j + 1] = lefts;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                cout<<board[i][j];
            cout<<endl;
        }

    }
    return 0;
}