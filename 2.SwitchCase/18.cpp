#include <iostream>
using namespace std;

int main() {
    int denomination;
    cout << "Enter currency denomination: ";
    cin >> denomination;

    switch(denomination) {
        case 1:
            cout << "One Rupee" << endl;
            break;
        case 2:
            cout << "Two Rupees" << endl;
            break;
        case 5:
            cout << "Five Rupees" << endl;
            break;
        case 10:
            cout << "Ten Rupees" << endl;
            break;
        case 20:
            cout << "Twenty Rupees" << endl;
            break;
        case 50:
            cout << "Fifty Rupees" << endl;
            break;
        case 100:
            cout << "One Hundred Rupees" << endl;
            break;
        case 500:
            cout << "Five Hundred Rupees" << endl;
            break;
        case 2000:
            cout << "Two Thousand Rupees" << endl;
            break;
        default:
            cout << "Invalid denomination" << endl;
    }

    return 0;
}
