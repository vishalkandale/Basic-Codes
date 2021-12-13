#include<iostream>
#include<string.h>
using namespace std;
class Myclass
{
    public:
        int a;
        string name;
    void fuc()
    {
        cout<<"fuction is here"<<"\n";
    }
};
int main()
{
    Myclass obj;
    obj.a = 20;
    obj.name="vishal";
    obj.fuc();
    cout<<obj.a<<"\n";
    cout<<obj.name;
    return 0;
}