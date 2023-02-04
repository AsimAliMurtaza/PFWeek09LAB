#include <iostream>
using namespace std;

main() 
{
   int size=0;

   cout << "Enter size of Array two: ";
   cin >> size;

   int arrayOne[2];
   int arrayTwo[size];
   int resultArray[size+2];
   
 
   for (int idx = 0; idx < 2; idx++) 
   {
      cout << "Enter elements for array one: ";
      cin >> arrayOne[idx];
   }


   for (int idx = 0; idx < size; idx++) 
   {
      cout << "Enter elements for second array: ";
      cin >> arrayTwo[idx];
   }
   
   for (int idx = 0; idx < 1; idx++)
   {
      resultArray[idx] = arrayOne[idx];
   }
   
   for (int idx = 0; idx < size; idx++) 
   {
      resultArray[idx + 1] = arrayTwo[idx];
   }
   
   for (int idx = 1; idx < size + 2; idx++) 
   {
      resultArray[idx + size] = arrayOne[idx];
   }
   
   cout << "Result array: ";

   for (int idx = 0; idx < size + 2; idx++) 
   {
      cout << resultArray[idx] << " ";
   }
}
