//C++ Program to Check Whether a character is Vowel or Consonant.

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char a;
    bool islowercase,isuppercase;
    cout<<"ENter alphabet";
    cin>>a;

    islowercase = (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u');
    isuppercase = (a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U');
    if(isuppercase || islowercase)
    {
        cout<<a<<" is a vowel";
    }
   else
    {
        cout<<"ITS CONSONANT";
    }
}
