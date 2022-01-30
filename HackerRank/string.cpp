/*
Sample Input:
abcd
ef
Sample Output:
4 2
abcdef
ebcd af
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	string a;
    cin>>a;
    string b;
    cin>>b;
    int len1 = a.size();
    int len2 = b.size();
    cout<<len1<<" "<<len2<<"\n";
    cout<<a+b<<"\n";
    int temp;
    temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    cout<<a<<" "<<b;
    return 0;
}
