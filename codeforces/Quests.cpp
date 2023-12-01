#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, c, d, k, biggest = -1;
        cin >> n >> c >> d;
        vector<ll> vec(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
            biggest = max(vec[i], biggest);
        }
        if ((biggest * d) < c)
        {
            std::cout<<"Impossible\n";
            continue;
        }
        if (biggest >= c)
        {
            std::cout<<"Infinity\n";
            continue;
        }
        k = d;
        sort(vec.rbegin(), vec.rend());
        /*let's rewrite this as, whats the least amount of coins needed to get sum c, and let's count the
            most frequently used number to get our k value*/
        unordered_map<ll, int> vals;
        ll sum = c;
        while (sum > 0)
        {
            ll x;
            std::cout<<"sum: "<<sum<<"\n";
            for (int i = 0; i < vec.size(); i++)
            {
                if (vec[i] <= sum)
                {
                    x = vec[i];
                    int count = floor(sum / x);
                    sum -= x * count;
                    vals[x] += count;
                    std::cout<<"x: "<<(x * count)<<"\n";
                    break;
                }
                std::cout<<"num: "<<vec[i]<<"\n";
            }
        }
        auto mostCommon = make_pair(0LL, -1);
        for (auto& p: vals)
        {
            std::cout<<"p: ("<<p.first<<", "<<p.second<<")\n";
            if (get<1>(p) > get<1>(mostCommon))
                mostCommon = p;
        }
        if (mostCommon.second > d)
        {
            cout<<"Impossible\n";
            continue;
        }

        cout<<(d - mostCommon.second - 1)<<"\n";
    }
}