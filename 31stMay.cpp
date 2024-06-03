#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    const short minValue = 1;
    const short maxValue = 6;

    srand(time(0));
    short die1 = rand() % (maxValue-minValue+1)+minValue;
    short die2 = rand() % (maxValue-minValue+1)+minValue;
    cout << "The first die played "<< die1 <<" and the second die played " << die2;
    return 0;
}
