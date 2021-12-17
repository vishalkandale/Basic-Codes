//C++ Program to Display Prime Numbers Between Two Intervals
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int low = 0;
    int high = 20;
    int i;
    bool isPrime = true;

    cout << "\nPrime numbers between " << low << " and " << high << " are: " << endl;

    while (low < high) {
        isPrime = true;
        if (low == 0 || low == 1) {
            isPrime = false;
        }
        else {
            for (i = 2; i <= low / 2; ++i) {
                if (low % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
        
        if (isPrime)
            cout << low << " ";

        ++low;
    }

    return 0;
}