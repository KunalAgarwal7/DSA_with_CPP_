#include <iostream>
using namespace std;

int main()
{
    int N, i = 1, sum = 0;

    cout << "Enter a number (N): ";
    cin >> N;

    do
    {
        sum += i;
        i++;
    } while (i <= N);

    cout << "Sum of first " << N << " natural numbers = " << sum;

    return 0;
}
