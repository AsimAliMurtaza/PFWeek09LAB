#include <iostream>
using namespace std;

main()
{
    string name;
    int len = 0;

    cout << "Enter String: ";
    getline(cin, name);

    name.length();
    len = name.length();

    for(int idx = len - 1; idx>=0; idx--)
    {
        cout << name[idx];
    }
}