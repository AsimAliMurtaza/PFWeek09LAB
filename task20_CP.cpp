#include <iostream>
using namespace std;

main()
{
    int size = 0;

    cout << "Enter number of resistances: ";
    cin >> size;

    int arr[size];

    for(int idx = 0; idx<size; idx++)
    {
        cout << "Enter resistance value in ohms: ";
        cin >> arr[idx];
    }

    float sum;

    for(int idx = 0; idx <size; idx++)
    {
        sum = sum + arr[idx];
    }
    cout << sum << " ohms";
}