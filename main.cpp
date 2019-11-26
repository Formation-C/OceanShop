#include <iostream>

#include "Computer.h"

using namespace std;

void disclaimer(Product& p)
{
    cout << "Buy this " << p.model << " for " << p.price << " euros !" << endl;
}

int main()
{
    Computer computer1(256, 28, true);
    computer1.price = 499;
    computer1.model = "Lenovo";
    Computer computer2(2048, 17, false);
    computer2.price = 899;
    computer2.model =  "Dell";

    disclaimer(computer1);
    disclaimer(computer2);

    computer1.turnOnOff();
    computer1.turnOnOff();
    return 0;
}
