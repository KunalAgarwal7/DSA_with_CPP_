#include <iostream>
using namespace std;

int main() {
    int rating;
    cout << "Enter performance rating (1-5): ";
    cin >> rating;

    switch(rating) {
        case 1:
            cout << "0% Bonus" << endl;
            break;
        case 2:
            cout << "10% Bonus" << endl;
            break;
        case 3:
            cout << "20% Bonus" << endl;
            break;
        case 4:
            cout << "30% Bonus" << endl;
            break;
        case 5:
            cout << "50% Bonus" << endl;
            break;
        default:
            cout << "Invalid rating" << endl;
    }

    return 0;
}
