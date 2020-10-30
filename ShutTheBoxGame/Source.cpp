#include <iostream>
#include <stdlib.h> /*srand, rand*/
#include <time.h>  /*time*/
using namespace std;
#include <math.h>
#include <set>

int main()
{
    int x = 2^2;
    cout << x  << endl;

    /*initialise random seed: */
    srand(time(NULL));
    int dice1, dice2;
    set<int> numberList; //numberList to hold numbers 1 to 12 
    /*int p = sqrt(pow())*/
    for (size_t i = 1; i <= 12; i++)
    {
        numberList.insert(i);
    }
    cout << "numberList size = " << numberList.size() << endl;

    while (numberList.size()!= 0)
    {
        dice1 = rand() % 6 + 1;
        dice2 = rand() % 6 + 1;
        cout << "Dice1 value = " << dice1 << " and " << "Dice1 value = " << dice2 << endl;
        int playerChoice;
        cout << "Choose a number you want to erase" << endl;
        cin >> playerChoice;
        numberList.erase(playerChoice);
        for (set<int> ::iterator it = numberList.begin(); it != numberList.end(); ++it)
        {
            cout << "Value at position " << *it << endl;
        }

    }

}
