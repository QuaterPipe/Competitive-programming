#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int letters[26];

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(false);
    memset(letters, 0, sizeof(letters));
    string s;
    cin>>s;
    for (char c: s)
        letters[c - 'A']++;
    for (int i = 0; i < 26; i++)
    {
        if (letters[i] && letters[i] % 2 != s.length() % 2)
        {
            cout<<"NO SOLUTION";
            return 0;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if (letters[i])
        {
            for (int j = 0; j < letters[i] / 2; j++)
                cout<<letters[i];
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if (letters[i] % 2)
            cout<<letters[i];
    }
    for (int i = 25; i >= 0; i--)
    {
        if (letters[i])
        {
            for (int j = 0; j < letters[i] / 2; j++)
                cout<<letters[i];
        }
    }
    cout<<endl;
    return 0;
}