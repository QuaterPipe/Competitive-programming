#include <bits/stdc++.h>
using namespace std;
bool isBeautiful(string& s)
{
    int val = 0;
    for (char c: s)
    {
        if (c == '(')
            val++;
        else
            val--;
    }
    return val == 0;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        if (!isBeautiful(s))
        {
            cout<<(-1)<<endl;
            continue;
        }
        std::set<int> indexes;
        int val = 0;
        for (size_t i = 0; i < s.length(); i++)
        {
            if (s[i] == '(')
                val++;
            else
                val--;
            if (!val && i + 1 < s.length())
            {
                if (s[i] == s[i + 1])
                    indexes.insert(i);
            }
        }
        if (indexes.size())
            cout<<"2"<<endl;
        else
            cout<<"1"<<endl;
        int colour = 1;
        for (size_t i = 0; i < s.length(); i++)
        {
            cout<<colour<<" ";
            if (indexes.find(i) != indexes.end())
            {
                if (colour == 1)
                    colour = 2;
                else
                    colour = 1;
            }
        }
        cout<<endl;
    }
}