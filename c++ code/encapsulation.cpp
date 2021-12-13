#include<iostream>
#include<string.h>
using namespace std;

class Myclass
{
    private: 
    int salary;
    public:
    void setsalary(int s)
    {
        salary = s;
    }
    int getsalary()
    {
        return salary;
    }
};
int main()
{
    Myclass obj;
    obj.setsalary(20000);
    cout<<obj.getsalary();

}
