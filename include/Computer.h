#ifndef COMPUTER_H
#define COMPUTER_H

#include <Product.h>

// Computer inherit from Product
class Computer : public Product
{
    public:
        int ram;
        int screenSize;
        bool isLaptop;

        Computer();
        Computer(int _ram, int _screenSize, bool _isLaptop);
        virtual ~Computer();

        void turnOnOff(void);

    protected:

    private:
        void update(void);
};

#endif // COMPUTER_H
