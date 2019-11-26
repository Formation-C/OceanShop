#include "Brand.h"

int globalId = 0;

Brand::Brand()
{
    //ctor
    setId();
}

Brand::Brand(string _name, string _logo) :
    name(_name), logo(_logo)
{
    //ctor
    setId();
}

Brand::~Brand()
{
    //dtor
}

void Brand::setId(void)
{
    globalId ++;
    id = globalId;

}
