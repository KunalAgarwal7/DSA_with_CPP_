#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter numbers (enter 0 to stop):\n";

    do
    {
        cin >> num;
        if (num != 0)
        {
            cout << "You entered: " << num << endl;
        }
    } while (num != 0);

    cout << "Program ended.";

    return 0;
}
