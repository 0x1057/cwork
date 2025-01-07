#include <iostream>
#include <string>
#include <random>
#include <ctime>

using namespace std;

int main()
{
    default_random_engine randomGenerator(time(NULL));
    uniform_int_distribution<int> diceRoll(1, 6);
    uniform_real_distribution<float> attackRoll(0.0f, 1.0f);

    cout << "I am rolling a " << diceRoll(randomGenerator) << endl;
    cout << "I am rolling a " << diceRoll(randomGenerator) << endl;
    cout << "I am rolling a " << diceRoll(randomGenerator) << endl;
    cout << "I am rolling a " << diceRoll(randomGenerator) << endl;
    cout << "I am rolling a " << diceRoll(randomGenerator) << endl;

    cout << "I am attacking the bad guy! " << attackRoll(randomGenerator) << " damage done!" << endl;
    cout << "I am attacking the bad guy! " << attackRoll(randomGenerator) << " damage done!" << endl;
    cout << "I am attacking the bad guy! " << attackRoll(randomGenerator) << " damage done!" << endl;
    cout << "I am attacking the bad guy! " << attackRoll(randomGenerator) << " damage done!" << endl;
    

    float attack = attackRoll(randomGenerator);

    if (attack <= 0.3f)
    {
        cout << "I hit the bad guy! YAAAAY!\n";
    }
    else 
    {
        cout << "I missed the bad guy! OHHH NOOOO!!!\n";
    }

    return 0;
}