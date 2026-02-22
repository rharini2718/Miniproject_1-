#include <iostream>

using namespace std;

int main()
{
    string name;
    int age;
    cout << "Enter your name:";
    cin >> name;
    cout << " Enter your age:";
    cin >> age;
    if ( age >= 18)
    {
    cout << "you are eligible to vote!";
    }
    else
    {
    cout << "you are not eligible to vote!";
    }
        return 0;
   }



