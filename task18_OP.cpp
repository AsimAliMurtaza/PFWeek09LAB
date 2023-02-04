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

    int isGreat = arr[0];

    for(int idx = 0; idx<size; idx++)
    {
        if(isGreat<arr[idx])
        {
            isGreat=arr[idx];
        }
    }
    cout << isGreat << " is the greatest number in array";
}