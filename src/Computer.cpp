#include "Computer.h"

using namespace std;

Computer::Computer()
{
    //ctor
}

Computer::Computer(int _ram, int _screenSize, bool _isLaptop):
    ram(_ram), screenSize(_screenSize), isLaptop(_isLaptop)
{
    //ctor
    cout << "Creating " << (isLaptop ? "desktop" :"laptop");
    cout << " with RAM " << ram << " Mo,";
    cout << " screen size " << screenSize << " inch." << endl;
}

Computer::~Computer()
{
    //dtor
}

void Computer::turnOnOff()
{
    isOff = (isOff ? false : true);
    cout << (isOff ? "Turn Off " : "Turn On") << endl;
}

void Computer::update( void )
{

}
