#include<iostream>
#include<string.h>
using namespace std;

class Animal
{
    public:
    void animalsound()
    {
        cout<<"animal makes a sound"<<"\n";
    }
};
class pig:public Animal
{
    public:
    void animalsound()
    {
        cout<<"pig sound wee wee"<<"\n";
    }
};
class dog:public Animal
{
    public:
    void animalsound()
    {
        cout<<"dog sound bhoo bhoo"<<"\n";
    }
};
int main()
{
    Animal a;
    pig p;
    dog d;
    a.animalsound();
    p.animalsound();
    d.animalsound();
    return 0;
}