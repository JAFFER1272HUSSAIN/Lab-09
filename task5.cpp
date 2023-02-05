#include<iostream>
using namespace std;
int main()
{
    int n; 
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    for(int i = 0;i < n; i++)
    {
        cout << "Enter number: ";
        cin >> arr[i];
    }
    int num,a;
    cout << "Enter another number to multiply: ";
    cin >> num;
    for(int i = n - 1; i >= 0 ; i--)
    {
        a = num * arr[i];
        cout << a << " ";
        a = num;
    }
}