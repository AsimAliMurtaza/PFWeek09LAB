#include <iostream>

using namespace std;

main() 
{
  string input;
  cout << "Enter string: ";
  cin >> input;

  int length = input.length();
  
  for (int i = 0; i < length; i++) 
  {
    cout << "Character " << input[i] << " found at index " << i << endl;
  }
  
}

