#include<iostream>
using namespace std;
int main()
{
    string name;
    int i;
    getline(cin, name);
    while(name[i] != '\0')
    {
        i++;
    }
    for(int n = i; n >= 0; n--)
    {
        cout << name[n]; 
    }
    int a = name.length();
    cout << endl << "Length is: "<< a;
}