#include <iostream>

#include "Computer.h"

using namespace std;

void disclaimer(Product& p)
{
    cout << "Buy this " << p.brand->Getname() << " " << p.model << " for " << p.price << " euros !" << endl;
}

int main()
{
    Brand brand1("Lenovo", "lenovo.png");
    Brand brand2("Dell", "dell.png");
    Computer computer1(&brand1, 256, 28, true);
    computer1.price = 499;
    computer1.model = "X567";
    Computer computer2(&brand2, 2048, 17, false);
    computer2.price = 899;
    computer2.model =  "DDMKS";

    disclaimer(computer1);
    disclaimer(computer2);

    computer1.turnOnOff();
    computer1.turnOnOff();

    cout << endl;

    return 0;

}
