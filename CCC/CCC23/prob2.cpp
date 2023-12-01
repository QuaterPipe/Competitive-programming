#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> mountains(N);
    for (int i = 0; i < N; i++)
        cin >> mountains[i];
    auto calcSym = [&](int a, int b) -> int{
        int sum = 0;
        for (int i = 0; i < ((b - a + 1) / 2); i++)
            sum += abs(mountains[a + i] - mountains[b - i]);
        return sum;
    };
    vector<int> answers;
    for (int i = 0; i < N; i++)
    {
        if (!i)
        {
            answers.push_back(0);
            continue;
        }
        if (i == 1)
        {
            int x = numeric_limits<int>::max();
            for (int j = 0; j < N - 1; j++)
            {
                if (!x)
                    break;
                x = min(abs(mountains[j] - mountains[j + 1]), x);
            }
            answers.push_back(x);
            continue;
        }
        if (i == N)
        {
            answers.push_back(calcSym(0, N - 1));
            continue;
        }
        int x = numeric_limits<int>::max();
        for (int j = 0; j < N - i; j++)
        {
            if (!x)
                break;
            x = min(calcSym(j, j + i), x);
        }
        answers.push_back(x);
    }
    for (int a: answers)
        cout<<a<<" ";
    cout<<endl;
    return 0;
}