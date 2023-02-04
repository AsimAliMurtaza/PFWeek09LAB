// this program finds a letter inputted by user in the inputted string. 
#include <iostream>
using namespace std;

main()
{
    string name;
    int len = 0;
    char letter;
    bool isFound = false;

    cout << "Enter String: ";
    getline(cin, name);

    cout << "Enter a letter: ";
    cin >> letter;

    name.length();
    len = name.length();

    for(int idx = 0; idx<len; idx++)
    {
        if(letter==name[idx])
        {
            isFound = true;
        }
    }

    if(isFound==true)
    {
        cout << "found";
    }
    else
    {
        cout << "not found";
    }
}