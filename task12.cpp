#include<iostream>
using namespace std;
int main()
{
    string name;
    int i;
    cout << "Enter something: ";
    getline(cin, name);
    int count = 0;
    while(name[i] != '\0')
    {
        i++;
        if(name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u')
        {
            count = count + 1;
        }
    }
    cout <<" Vowels: "<< count;
}