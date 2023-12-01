#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
    cin.tie(0);
    cin.sync_with_stdio(false);
    int n;
    cin>>n;
    set<ll> arr;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin>>x;
        arr.insert(x);
    }
    cout<<arr.size()<<endl;
    return 0;
}