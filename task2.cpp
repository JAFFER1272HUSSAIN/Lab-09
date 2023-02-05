#include<iostream>
using namespace std;
int main()
{
    int n;
    float sum,avg;
    cout << "Enter size of array: ";
    cin >> n;
    float arr[n];
    for(int ind = 0; ind < n; ind++)
    {
        cout << "Enter number: ";
        cin >> arr[ind];
        sum = sum + arr[ind];
    }
    avg = sum / n;
    cout << "Sum is: " << sum << endl;
    cout << "Average is: " << avg;
}