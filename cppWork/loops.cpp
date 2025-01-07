#include <iostream>
#include <string>

using namespace std;

int main()
{
    int i = 0;

    while (i < 10)
    {
        cout << i << endl;
        i++;
    }

    for (int j = 0; j < 10; j++)
    {
        for (int k = 0; k <= j; k++)
        {
            cout << "#";
        }
        cout << endl;
    }

    return 0;
}