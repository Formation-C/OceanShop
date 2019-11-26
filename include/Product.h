#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
using namespace std;

class Product
{
    public:
        int id;
        float price;
        int productSize;
        string model;
        bool isOff;

        Product();
        virtual ~Product();

        // Méthode virtuelle: cette méthode rend la classe abstraite
        virtual void turnOnOff() = 0;

    protected:

    private:
};

#endif // PRODUCT_H
