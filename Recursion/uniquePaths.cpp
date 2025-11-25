#include <bits/stdc++.h>
using namespace std;

int paths(int i, int j, int m, int n)
{
    // out of bounds
    if (i >= m || j >= n)
        return 0;

    // reached destination
    if (i == m - 1 && j == n - 1)
        return 1;

    // move down + move right
    return paths(i + 1, j, m, n) + paths(i, j + 1, m, n);
}

int uniquePaths(int m, int n)
{
    return paths(0, 0, m, n);
}

int main()
{
    cout << uniquePaths(3, 7) << endl;
}
