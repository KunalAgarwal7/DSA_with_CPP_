#include <iostream>
using namespace std;
int main()
{
    cout << "    " << 1;
    cout << endl;
    cout << "   " << 1 << " " << 1 << endl;
    int ans = 11;
    int val;
    for (int i = 1; i <= 3; ++i)
    {
        for (int j = 3 - i; j >= 1; --j)
        {
            cout << " ";
        }
        ans = ans * 11;
        val = ans;
        while (val > 0)
        {
            cout << val % 10 << " ";
            val /= 10;
        }
        cout << endl;
    }
}