#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0);
    int C;
    cin >> C;
    vector<int> tiles(C * 2);
    for (int i = 0; i < C * 2; i++)
        cin >> tiles[i];
    vector<int> visitedTiles(C);
    auto adjCount = [&](int ind, bool up) -> int{
        int count = 0;
        if (up)
        {
            if (ind && tiles[ind - 1])
                count++;
            if (ind < C - 1 && tiles[ind + 1])
                count++;
            if (tiles[ind + C] && !(ind % 2))
                count++;
        }
        else
        {
            if (ind > C && tiles[ind - 1])
                count++;
            if (ind < (C * 2) - 1 && tiles[ind + 1])
                count++;
            if (tiles[ind - C] && !((ind - C) % 2))
                count++;
        }
        return count;
    };
    int perimeter = 0;
    for (int i = 0; i < C; i++)
    {
        if (tiles[i])
        {
            perimeter += 3;
            perimeter -= adjCount(i, true);
        }
    }
    for (int i = C; i < C * 2; i++)
    {
        if (tiles[i])
        {
            perimeter += 3;
            perimeter -= adjCount(i, false);
        }
    }
    cout << perimeter << endl;
    return 0;
}
/*
7
1 1 1 0 0 0 0
1 1 1 0 0 0 0
*/