//C++ Program to Calculate Average of Numbers Using Arrays

#include<iostream>
using namespace std;
int main()
{
    int n,i;
    int sum = 0;
    cout<<"Enter size of array : ";
    cin>>n;

    for ( i=0;i<n+1;i++)
    {
        cout<<"Enter number of array : ";
        cin>>i;
        sum+=i;
    }
    cout<<"avarage of array is "<<sum/n;

}