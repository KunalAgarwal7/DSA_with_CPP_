#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "Enter a number (1-5): ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Diwali" << endl;
            break;
        case 2:
            cout << "Holi" << endl;
            break;
        case 3:
            cout << "Eid" << endl;
            break;
        case 4:
            cout << "Christmas" << endl;
            break;
        case 5:
            cout << "Navratri" << endl;
            break;
        default:
            cout << "Invalid input" << endl;
    }

    return 0;
}
