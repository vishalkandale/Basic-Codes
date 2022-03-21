#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin>>n;
    int arr[10];
    for(int j=0;j<n;j++)
    {
        cin>>arr[j];
    }
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    cout<<sum;

}