// reversed array
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void rev(int *a,int n)
{
    int j = n-1;
    int temp;
    for (int i=0;i<j;i++,j--)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    for(int i=0;i<n;i++)
    {
    cout<<a[i]<<" ";
    }
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    rev(arr, n);
    
    return 0;
}
