/*
Sample Input:
15
john
carmack
10

Sample Output:
15
carmack, john
10

15,john,carmack,10
*/

#include <iostream>
#include <sstream>
using namespace std;

class Student
{
    private:
    int a;
    int b;
    string c;
    string d;
    string e;
    
    public:
    void set_age(int age)
    {
        a  = age;
    }
    void set_standard(int standard)
    {
        b  = standard;
    }
    void set_first_name(string first_name)
    {
        c  = first_name;
    }
    void set_last_name(string last_name)
    {
        d  = last_name;
    }
    
    int get_age()
    {
        return a;
    }
    int get_standard()
    {
        return b;
    }
    string get_first_name()
    {
        return c;
    }
    string get_last_name()
    {
        return d;
    }
    
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << age<<","<<first_name<<","<<last_name<<","<<standard;
    
    return 0;
}