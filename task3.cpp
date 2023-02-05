#include<iostream>
using namespace std;
int main()
{
    int size;
    int n;
    cout << "Enter size of array: ";
    cin >> size;
    int arr[size];
    for(int ind = 0; ind < size; ind++)
    {
        cout << "Enter value: ";
        cin >> arr[ind];
    }
    
    cout << "Enter value you want to know that if present in entered values or not: ";
    cin >> n;
    for(int ind = 0; ind < size; ind++)
    {
        if(arr[ind] == n)
        {
            cout << "Present....";
            break;
        }
        else
        {
            cout << "Not present...";
            break;
        }
    }

    
}