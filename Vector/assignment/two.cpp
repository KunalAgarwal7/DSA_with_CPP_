#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    for (int i = 1; i <= 10; ++i)
    {
        int a;
        cout << "Enter " << i << " element: ";
        cin >> a;
        v.push_back(a);
    }

    int max = v[0];
    for (int i = 1; i < v.size(); ++i)
    {
        if (max < v[i])
        {
            max = v[i];
        }
    }

    cout << "Max:" << max << endl;

    int min = v[0];
    for (int i = 1; i < v.size(); ++i)
    {
        if (min > v[i])
        {
            min = v[i];
        }
    }

    cout << "Min:" << min;
}