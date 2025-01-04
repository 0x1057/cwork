#include <iostream>
#include <string>

using namespace std;

int main()
{
    string playerName;
    int age;

    cout << "What is your name?\n";
    cin >> playerName;

    cout << "Hello " << playerName << endl;
    cout << "How old are you?\n";

    cin >> age;

    cout << "You are " << age << " years old\n";

    if (age > 100)
    {
        cout << "You are too old to do anything useful\n";
    }

    return 0;
}