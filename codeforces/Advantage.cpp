#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, biggest = -1, secondBiggest = 0;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] > biggest)
            {
                secondBiggest = biggest;
                biggest = arr[i];
            }
            else
                secondBiggest = max(arr[i], secondBiggest);
        }
        if (!secondBiggest)
            secondBiggest = biggest;
        for (int i: arr)
        {
            if (i == biggest)
                std::cout<<(i - secondBiggest)<<" ";
            else
                std::cout<<(i - biggest)<<" ";
        }
        std::cout<<"\n";
    }
    return 0;
}