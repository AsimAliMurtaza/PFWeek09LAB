#include <iostream>
#include <string>

using namespace std;

main() 
{
  string str;

  cout << "Enter a string: ";
  getline(cin, str);
  
  for (int i = 0; i < str.length(); i++) 
  {
    if (str[i] == 'a') 
    {
      str[i] = 'b';
    } 
    else if (str[i] == 'b') 
    {
      str[i] = 'c';
    }
    else if (str[i] == 'c') 
    {
      str[i] = 'd';
    }
    else if (str[i] == 'd') 
    {
      str[i] = 'e';
    }
    else if (str[i] == 'e') 
    {
      str[i] = 'f';
    }
    else if (str[i] == 'f') 
    {
      str[i] = 'g';
    }
    else if (str[i] == 'g') 
    {
      str[i] = 'h';
    }
    else if (str[i] == 'h') 
    {
      str[i] = 'i';
    }
    else if (str[i] == 'i') 
    {
      str[i] = 'j';
    }
    else if (str[i] == 'j') 
    {
      str[i] = 'k';
    }
    else if (str[i] == 'k') 
    {
      str[i] = 'l';
    }
    else if (str[i] == 'l') 
    {
      str[i] = 'm';
    }
    else if (str[i] == 'm') 
    {
      str[i] = 'n';
    }
    else if (str[i] == 'n') 
    {
      str[i] = 'o';
    }
    else if (str[i] == 'o') 
    {
      str[i] = 'p';
    }
    else if (str[i] == 'p') 
    {
      str[i] = 'q';
    }
    else if (str[i] == 'q') 
    {
      str[i] = 'r';
    }
    else if (str[i] == 'r') 
    {
      str[i] = 's';
    }
    else if (str[i] == 's') 
    {
      str[i] = 't';
    }
    else if (str[i] == 't') 
    {
      str[i] = 'u';
    }
    else if (str[i] == 'u') 
    {
      str[i] = 'v';
    }
    else if (str[i] == 'v') 
    {
      str[i] = 'w';
    }
    else if (str[i] == 'w') 
    {
      str[i] = 'x';
    }
    else if (str[i] == 'x') 
    {
      str[i] = 'y';
    }
    else if (str[i] == 'y') 
    {
      str[i] = 'z';
    }
    else if (str[i] == 'z') {
      str[i] = 'a';
    } 
  }
    cout << "Result: " << str << endl;
}
