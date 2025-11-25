#include <bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n, char from, char to, char aux)
{
    // Base case
    if (n == 0)
        return;

    // Move n-1 disks from 'from' → 'aux' using 'to'
    towerOfHanoi(n - 1, from, aux, to);

    // Move the remaining disk from 'from' → 'to'
    cout << "Move disk " << n << " from " << from << " to " << to << endl;

    // Move n-1 disks from 'aux' → 'to' using 'from'
    towerOfHanoi(n - 1, aux, to, from);
}

int main()
{
    int n;
    cin >> n; // Number of disks

    towerOfHanoi(n, 'A', 'C', 'B'); // A = source, C = destination, B = auxiliary

    return 0;
}
