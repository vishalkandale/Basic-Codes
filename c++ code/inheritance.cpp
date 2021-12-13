#include<iostream>
#include<string.h>
using namespace std;

class baseclass
{
    public:
    int salary = 20000;
    void fuc()
    {
        cout<<"base class is here "<<"\n";
    }
};
class car:public baseclass
{
    public:
    string carname = "audi";
};
int main()
{
    car obj;
    obj.fuc();
    cout<<obj.salary<<" its a salary and car name is "<<obj.carname;
    return 0;
}