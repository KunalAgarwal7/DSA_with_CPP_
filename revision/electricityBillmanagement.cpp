#include <bits/stdc++.h>
using namespace std;
int main()
{
    int customer;
    cout << "Enter number of customer: ";
    cin >> customer;

    vector<string> name(customer, " ");
    vector<int> units(customer, 0), bill(customer, 0);

    for (int i = 1; i <= customer; ++i)
    {
        cout << "Enter " << i << " customer name: ";
        cin >> name[i - 1];

        cout << "Enter " << i << " customer units: ";
        cin >> units[i - 1];
    }

    for (int j = 0; j < customer; ++j)
    {
        int sum = 0;
        for (int i = 1; i <= units[j]; i++)
        {
            if (i <= 100)
                sum += 5;
            if (i > 100 && i <= 300)
                sum += 7;
            if (i > 300)
                sum += 10;
        }

        if (sum > 2000)
            sum = sum + sum * 0.05;
            
        bill[j] = sum;
    }
    for (int i = 0; i < customer; ++i)
    {
        cout << "Name: " << name[i] << " Units: " << units[i] << " Bill: " << bill[i] << endl;
    }
}
