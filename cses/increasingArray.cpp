#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll arr[200001];

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(false);
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    ll sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            sum += arr[i - 1] - arr[i];
            arr[i] = arr[i - 1];
        }
    }
    cout<<sum<<endl;
    return 0;
}