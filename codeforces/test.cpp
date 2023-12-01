#include <bits/stdc++.h>
using namespace std;
int binarySearch(vector<int>::iterator start, int length, int value)
{
    int minDif = numeric_limits<int>::max();
    auto a = start;
    auto b = start + length;
    while (a != b)
    {
        auto middle = a + ((b - a) / 2);
        if (*middle == value)
            return value;
        if (*middle > value)
        {
            b = middle;
        }
        else if (*middle < value)
        {
            if (*(middle + 1) > value)
                return *middle;
            a = middle;
        }
    }
}
int main()
{
    vector<int> vals = {1, 2, 4, 5, 6, 7, 8, 9, 11};
    cout << binarySearch(vals.begin(), vals.size(), 0) << "\n";
    cout << binarySearch(vals.begin(), vals.size(), 10);
}