#ifndef BRAND_H
#define BRAND_H

#include <iostream>
using namespace std;

class Brand
{
    public:
        Brand();
        Brand(string _name, string _logo);
        virtual ~Brand();

        int Getid() { return id; }
        void Setid(int val) { id = val; }
        string Getlogo() { return logo; }
        void Setlogo(string val) { logo = val; }
        string Getname() { return name; }
        void Setname(string val) { name = val; }

    protected:

    private:
        int id;
        string name;
        string logo;

        void setId(void);
};

#endif // BRAND_H
