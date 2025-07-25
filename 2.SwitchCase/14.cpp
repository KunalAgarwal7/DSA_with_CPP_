#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "Enter a number (1-4): ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "B.Tech" << endl;
            break;
        case 2:
            cout << "M.Tech" << endl;
            break;
        case 3:
            cout << "Ph.D." << endl;
            break;
        case 4:
            cout << "MBA" << endl;
            break;
        default:
            cout << "Invalid input" << endl;
    }

    return 0;
}
