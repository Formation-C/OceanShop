#include "Computer.h"

using namespace std;
//Computer::Computer(Brand* _brand):brand(_brand)
//{
//
//
//}

Computer::Computer(Brand *_brand, int _ram, int _screenSize, bool _isLaptop):
    Product(_brand), ram(_ram), screenSize(_screenSize), isLaptop(_isLaptop)
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
