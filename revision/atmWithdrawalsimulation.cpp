#include <bits/stdc++.h>
using namespace std;
int main()
{
    int balance = 10000;
    int transactions;
    cout << "Enter the number of transactions: ";
    cin >> transactions;

    for (int i = 0; i < transactions; ++i)
    {
        int num;
        cout << "Enter 1 for withdraw, Enter 2 for deposit, Enter 3 for balance inquiry: "<<endl;

        cin >> num;

        if (num == 1)
        {
            int w;
            cout << "Maximum withdrawal amount 5000: ";
            cin >> w;

            if (w > balance)
            {
                cout << "Not sufficient amount.";
                return 0;
            }

            balance -= w;
        }
        if (num == 2)
        {
            int d;
            cout << "Enter deposit amount: ";
            cin >> d;
            balance += d;
        }
        if (num == 3)
        {
            cout << "Total balance: " << balance << endl;
        }
    }

    cout << "Your final balance is: " << balance;
}