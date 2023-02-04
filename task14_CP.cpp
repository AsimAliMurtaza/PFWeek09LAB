#include <iostream>
using namespace std;

main()
{
    string name;
    int count = 0;
    int len;

    cout << "Enter String: ";
    getline(cin, name);

    name.length();
    len = name.length();

    for(int idx = 0; idx<len; idx++)
    {
        if(name[idx]=='a' || name[idx]=='e' || name[idx]=='i' || name[idx]=='o' || name[idx]=='u')
        {
            count++;
        }
    }
    cout << "Number of vowels: " << count << endl;
}