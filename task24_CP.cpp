#include <iostream>
using namespace std;

main()
{
    string input;

    cout << "Enter string in which vowels are to be removed: ";
    getline(cin,input);

    int length = input.length();

    for(int i = 0; i<length; i++)
    {
        if(input[i]=='a' || input[i]=='e' || input[i]=='i' || input[i]=='o' || input[i]=='u')
        continue;
        cout << input[i];
    }
}