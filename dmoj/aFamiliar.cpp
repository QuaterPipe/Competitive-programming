#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int arr[200001];
int main()
{
    int n, m;
    cin>>n>>m;
    for (int i = 0; i < n; i++)
        cin>>arr[i];
    int start = 0, end = 0, longest = 0;
    for (int i = 0; i < n; i++)
    {
        cout<<start<<" "<<end<<endl;
        if (start + arr[i] < m)
        {
            end += 1;
            start = start + arr[i];
        }
        else if (start > 0)
        {
            start = start - arr[i - end] + arr[i];
        }
        longest = max(longest, arr[i]);
    }
    cout<<longest;
    return 0;
}