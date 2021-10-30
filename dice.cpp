#include <iostream>
#include <cstdlib>
using namespace std;

class Dice
{
    public:
        Dice();
        Dice( int n ) { sides = n; }
        void roll();
        void show();
        int value() { return dots; }
    private:
        int dots;
        int sides;
};

Dice::Dice()
{
    sides = 6;
}


void Dice::roll()
{
    dots = rand() % sides + 1;
}


void Dice::show()
{
    cout << "dice value " << dots << endl;
}


int main()
{
    Dice d1, d2(20);

    srand( time(NULL) );

    d1.roll();
    d2.roll();

    cout << "D1 is " << d1.value() << endl;
    cout << "D2 is " << d2.value() << endl;

    return 0;
}
