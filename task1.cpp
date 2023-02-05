#include<iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the size of array: ";
    cin >> num;
    float cgpa[num];
    for(int index = 0; index < num; index++)
    {
        cout << "Enter value: ";
        cin >> cgpa[index];
    } 
    for(int index = 0; index < num; index++)
    {
        cout << cgpa[index] << " ";
    }
}