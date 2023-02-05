#include<iostream>
using namespace std;
int main()
{
    string name;
    int i;
    cout << "Enter something: ";
    getline(cin, name);
    while(name[i] != '\0')
    {
        if(name[i] == 'a')
        {
            name[i] = 'b';
        }
    }
}