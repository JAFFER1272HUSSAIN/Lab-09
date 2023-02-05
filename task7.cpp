#include<iostream>
using namespace std;
int main()
{
    string name;
    getline(cin, name);
    for(int i = 0 ; name[i] != '\0'; i++)
    {
        cout << i << "th is " << name[i] << endl;
    }
}