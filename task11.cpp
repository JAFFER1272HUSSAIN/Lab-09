#include<iostream>
using namespace std;
int main()
{
    string name;
    int i;
    bool c = false;
    getline(cin, name);
    char ch;
    cout << "Enter character: ";
    cin >> ch;
    for(i = 0 ; name[i] != '\0'; i++)
    {
        if(name[i] == ch)
        {
            c = true;
            break;
        }
    }
    if(c == true)
    {
        cout << "Present....";
    }
    else
    {
        cout << "Not Present....";
    }
}