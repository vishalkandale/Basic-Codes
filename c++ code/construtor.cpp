#include<iostream>
#include<string.h>
using namespace std;

class Myclass
{
    public:
    Myclass()
    {
        cout<<"constructor";
    }
};
int main()
{
    Myclass obj;
    return 0;
}