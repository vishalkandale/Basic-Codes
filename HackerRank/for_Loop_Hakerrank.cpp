#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int i,a,b;
    cin>>a>>b;
    string num[11] = {"one","two","three","four","five","six","seven","eight","nine","even","odd"};
    
    for(i=a;i<=b;i++)
    {
        if (i>9 && i%2==0)
        {
            cout<<num[9]<<endl;
        }
        else if (i>9 && i%2!=0) 
        {
            cout<<num[10]<<endl;
        }
        else 
        {
           cout<<num[i-1]<<endl; 
        }
    }
    return 0;
}