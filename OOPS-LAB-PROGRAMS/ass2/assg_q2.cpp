//C++ program to check whether a number if Armstrong or not.
/* NAME: SHUBHANGI DWIVEDI
ROLL NO. :1913122
DATE OF CREATION : 07/01/21 */

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
   int num, original_num, rem, n = 0, res = 0, power; //rem=remainder
   cout << "Enter an integer: ";
   cin >>num;

   original_num = num;

   while (original_num != 0)
   {
      original_num /= 10;
      ++n;
   }
   original_num = num;

   while (original_num != 0)
   {
      rem = original_num % 10;
      power = round(pow(rem, n));
      res += power;
      original_num /= 10;
   }

   if (res == num)
   {
      cout <<"********"<< num << " is an Armstrong no.********";
   }
   else
   {
      cout <<"********"<< num << " is not an Armstrong no.********";
   }
   return 0;
}
