//Maximum subarray sum
#include<iostream>
using namespace std;
int main()
{
    int array[8] = {-1,2,4,-3,5,2,-5,2};
    int n = 5;
    int best = 0,sum = 0;
    for(int k = 0;k<n;k++)
    {
    sum = max(array[k],sum+array[k]);
    best = max(best,sum);
    }
    cout << best << "\n";
}