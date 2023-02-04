#include <iostream>
using namespace std;

main()
{
    int size = 0;
    int number = 0;
    bool isFound = false;

    cout << "Enter size of the array: ";
    cin >> size;

    int arr[size];

    for(int idx = 0; idx<size; idx++)
    {
        cout << "Enter a number: ";
        cin >> arr[idx];
    }

    cout << "Enter another number to search: ";
    cin >> number;

    for(int idx =0 ; idx<size; idx++)
    {
        if(arr[idx]==number)
        {
            isFound = true;
        }
    }
    if(isFound == true)
    {
        cout << "already entered";
    }
    else
    {
        cout << "not found";
    }
}