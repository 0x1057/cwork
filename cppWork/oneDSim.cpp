#include <iostream>
#include <string>
#include <ctime>
#include <random>

using namespace std;

int main()
{
    int humans = 0;
    int orcs = 0;
    int forcesLost = 100;

    default_random_engine randomGenerator(time(0));
    uniform_real_distribution<float> chanceToHit(0.0f, 1.0f);
    uniform_real_distribution<float> chanceToBlock(0.0f, 1.0f);


    cout << "How many humans in the human army? ";
    cin >> humans;
    cout << "\nHow many orcs in the orc army? ";
    cin >> orcs;

    cout << "It's time for COMBAT!!!!!\nCombat initializing...\n";


    while (humans > 0 && orcs > 0)
    {
        if (chanceToHit(randomGenerator) >= chanceToBlock(randomGenerator))
        {
            humans -= forcesLost;
        }
        else
        {
            orcs -= forcesLost;
        }
    }

    if (humans == 0)
    {
        cout << "\nORCS ARE VICTORIOUS!\n";
    }
    else
    {
        cout << "\nHUMANS ARE VICTORIOUS!\n";
    }




    return 0;
}