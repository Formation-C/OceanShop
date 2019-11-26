#ifndef PRODUCT_H
#define PRODUCT_H


class Product
{
    public:
        int id;
        float price;
        int productSize;
        string model;

        Product();
        virtual ~Product();

        void turnOnOff();

    protected:

    private:
};

#endif // PRODUCT_H
