#include<iostream>
#include<string.h>
using namespace std;

void myFuction(string name="Jack")     
{
    cout<<name<<"\n";
}
void fun(string fname,int age)
{
    cout<<fname<<" age is : "<<age;
}
int main()
{
    myFuction("vishal");
    myFuction();                //defualt parameter
    fun("vish",21);
}