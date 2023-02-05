#include<iostream>
using namespace std;
int main()
{
    string name;
    getline(cin, name);
    int a = name.length();
    cout << "Length is: "<< a << endl;
    if(a % 2 == 0)
    {
        cout << "Even...";
    }
    else
    {
        cout << "Odd...";
    }
}