#ifndef COMPUTER_H
#define COMPUTER_H

#include <Product.h>

// Computer inherit from Product
class Computer : public Product
{
    using Product::Product;

    public:
        int ram;
        int screenSize;
        bool isLaptop;

        //Computer(Brand* _brand);
        Computer(Brand* _brand, int _ram, int _screenSize, bool _isLaptop);
        virtual ~Computer();

        void turnOnOff(void);

    protected:

    private:
        void update(void);
};

#endif // COMPUTER_H
