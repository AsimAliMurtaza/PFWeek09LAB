#include <iostream>
using namespace std;

main()
{

  string input;
  string word = "something";

  cout << "Enter string: ";
  cin >> input;


  int length = word.length();
  
  for (int i = 0; i < length; i++) 
  {
    cout << word[i];
  }
  
  cout << " ";
  
  int lengthString = input.length();
  
  for (int i = 0; i < lengthString; i++) 
  {
    cout << input[i];
  }
  
  cout << endl;
}