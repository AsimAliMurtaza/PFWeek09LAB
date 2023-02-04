#include <iostream>
using namespace std;

main()
{
    string name;
    int len = 0;
    char letter;

    cout << "Enter String: ";
    getline(cin, name);

    cout << "Enter a letter: ";
    cin >> letter;

    name.length();
    len = name.length();

    if(letter==name[len -1]) //if last letter is the same as the letter input by user, it displays true else false.
    {
        cout << "true";
    }
    else{
        cout << "false";
    }

}