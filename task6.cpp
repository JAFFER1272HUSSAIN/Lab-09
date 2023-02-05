#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n; i++)
    {
        cout << "Enter value: ";
        cin >> arr[i];
    }
    int small = arr[0];
    for(int i = 0; i < n; i++)
    {
        if(small > arr[i])
        {
            small = arr[i];
        }
    }
    cout << small;
}