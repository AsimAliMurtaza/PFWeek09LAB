#include <iostream>
using namespace std;
main()
{
    int size;
    int sum = 0;
    float avg = 0;
    
    cout << "Enter size of the array: ";
    cin >> size;

    int arr[size];

    for(int idx = 0; idx<size; idx++)
    {
        cout << "Enter a number: ";
        cin >> arr[idx];
    }
    for(int idx = 0; idx<size; idx++)
    {
        sum = sum + arr[idx];
    }
    avg = sum / size;

    cout << "Average: " << avg << endl;
    cout << "Sum: " << sum << endl;
}