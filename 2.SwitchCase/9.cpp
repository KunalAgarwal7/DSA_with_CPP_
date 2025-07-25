#include <iostream>
using namespace std;

int main() {
    int month;
    cout << "Enter a number (1-12) for the Zodiac sign: ";
    cin >> month;

    switch (month) {
        case 1:
            cout << "Capricorn\n";
            break;
        case 2:
            cout << "Aquarius\n";
            break;
        case 3:
            cout << "Pisces\n";
            break;
        case 4:
            cout << "Aries\n";
            break;
        case 5:
            cout << "Taurus\n";
            break;
        case 6:
            cout << "Gemini\n";
            break;
        case 7:
            cout << "Cancer\n";
            break;
        case 8:
            cout << "Leo\n";
            break;
        case 9:
            cout << "Virgo\n";
            break;
        case 10:
            cout << "Libra\n";
            break;
        case 11:
            cout << "Scorpio\n";
            break;
        case 12:
            cout << "Sagittarius\n";
            break;
        default:
            cout << "Invalid input! Enter a number between 1 and 12.\n";
            break;
    }

    return 0;
}
