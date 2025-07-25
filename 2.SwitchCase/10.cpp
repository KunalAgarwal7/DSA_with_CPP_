#include <iostream>
using namespace std;

int main() {
    int sides;
    cout << "sides: ";
    cin >> sides;

    switch (sides) {
        case 3:
            cout << "Triangle";
            break;
        case 4:
            cout << "Quadrilateral";
            break;
        case 5:
            cout << "Pentagon";
            break;
        case 6:
            cout << "Hexagon";
            break;
        case 7:
            cout << "Heptagon";
            break;
        case 8:
            cout << "Octagon";
            break;
        case 9:
            cout << "Nonagon";
            break;
        case 10:
            cout << "Decagon";
            break;
        default:
            cout<<"Enter between 3 to 10";
            break;
    }
    cout << endl;
    return 0;
}
