#include <iostream>
using namespace std;

int main() {
    int planet;
    cout << "Enter a planet number (1-8): ";
    cin >> planet;

    switch(planet) {
        case 1:
            cout << "Mercury is the closest planet to the Sun." << endl;
            break;
        case 2:
            cout << "Venus has a thick, toxic atmosphere." << endl;
            break;
        case 3:
            cout << "Earth is the only planet known to support life." << endl;
            break;
        case 4:
            cout << "Mars is known as the Red Planet." << endl;
            break;
        case 5:
            cout << "Jupiter is the largest planet in the Solar System." << endl;
            break;
        case 6:
            cout << "Saturn is famous for its beautiful rings." << endl;
            break;
        case 7:
            cout << "Uranus rotates on its side." << endl;
            break;
        case 8:
            cout << "Neptune is the farthest planet from the Sun." << endl;
            break;
        default:
            cout << "Invalid input. Enter a number from 1 to 8." << endl;
    }

    return 0;
}
