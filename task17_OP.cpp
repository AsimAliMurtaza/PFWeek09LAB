#include <iostream>
using namespace std;

main()
{
    int size = 0;
    int num = 0;

    cout << "Enter size of the array: ";
    cin >> size;

    int arr[size];

    for(int idx = 0; idx<size; idx++)
    {
        cout << "Enter a number: ";
        cin >> arr[idx];
    }
    cout << "Enter a number to multiply: ";
    cin >> num;

    for(int idx = size-1; idx>=0; idx--)
    {
        cout << arr[idx] * num << " ";
    }
}