#include "Product.h"

Product::Product(Brand* _brand)
{
    //ctor
    isOff = true;
    brand = _brand;
}

Product::~Product()
{
    //dtor
}
