#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "Enter a number (1-5): ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Tesla" << endl;
            break;
        case 2:
            cout << "BMW" << endl;
            break;
        case 3:
            cout << "Audi" << endl;
            break;
        case 4:
            cout << "Mercedes-Benz" << endl;
            break;
        case 5:
            cout << "Toyota" << endl;
            break;
        default:
            cout << "Invalid input" << endl;
    }

    return 0;
}
