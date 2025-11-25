#include <bits/stdc++.h>
using namespace std;
int main()
{
    int student;
    cout << "Enter number of students: ";
    cin >> student;

    vector<int> v(student, 0);
    vector<string> s(student, " ");
    vector<char> grade(student, ' ');

    for (int i = 0; i < student; ++i)
    {
        int sum = 0;
        int in;

        string name;
        cout << "Enter student name: ";
        cin >> name;
        s[i] = name;

        cout << "Math marks: ";
        cin >> in;
        sum += in;
        cout << "Biology marks: ";
        cin >> in;
        sum += in;
        cout << "English marks: ";
        cin >> in;
        sum += in;
        cout << "Hindi marks: ";
        cin >> in;
        sum += in;
        cout << "Computer marks: ";
        cin >> in;
        sum += in;

        v[i] = (sum / 500) * 100;

        if (v[i] >= 90)
            grade[i] = 'A';
        else if (v[i] >= 70 && v[i] < 90)
            grade[i] = 'B';
        else if (v[i] >= 50 && v[i] < 70)
            grade[i] = 'C';
        else if (v[i] < 50)
            grade[i] = 'F';
    }

    int maxi = INT_MIN, index;
    for (int i = 0; i < v.size(); ++i)
    {
        if (maxi < v[i])
            index = i;
    }

    cout << s[index] << " " << v[index];
}