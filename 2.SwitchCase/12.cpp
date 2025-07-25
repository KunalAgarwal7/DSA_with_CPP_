#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "Enter a number: ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Apple" << endl;
            break;
        case 2:
            cout << "Banana" << endl;
            break;
        case 3:
            cout << "Cherry" << endl;
            break;
        case 4:
            cout << "Date" << endl;
            break;
        default:
            cout << "Invalid input" << endl;
    }

    return 0;
}
