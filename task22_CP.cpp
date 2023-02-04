#include <iostream>

using namespace std;

main() 
{
  float change[4];
  float totalDue =0;
  float total = 0;

  for(int i = 0; i<4; i++)
  {
  cout << "Enter change:";
  cin >> change[i];
  }

  cout<< "Enter due: ";
  cin >> totalDue;

  total = (change[0]  * 0.25) + (change[1] * 0.10) + (change[2] * 0.05) + (change[3] * 0.01);

  if (total>=totalDue) 
  {
    cout << "Payment successful" << endl;
  } 
  else 
  {
    cout << "Payment failed" << endl;
  }
}