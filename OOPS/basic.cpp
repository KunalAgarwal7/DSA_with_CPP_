#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    int age;
    string name;

    void display()
    {
        cout << age << endl
             << name;
    }
};
int main()
{
    student s1;
    s1.name = "Kunal";
    s1.age = 22;

    s1.display();
}