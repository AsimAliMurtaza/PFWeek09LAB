#include <iostream>
using namespace std;

main()
{
    int size = 0;

    cout << "Enter size of the array: ";
    cin >> size;

    int arr[size];

    for(int idx = 0; idx<size; idx++)
    {
        cout << "Enter a number: ";
        cin >> arr[idx];
    }

    int isSmall = arr[0];

    for(int idx = 0; idx <size; idx++)
    {
        if(idx<isSmall)
        {
            isSmall=arr[idx];
        }
    }
    cout << isSmall << " is the smallest number in array";
}