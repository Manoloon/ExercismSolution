#include "reverse_string.h"

namespace reverse_string 
{
   std::string reverse_string(std::string newString)
   {
     int n= newString.size();
     for (int i = 0; i < n / 2; i++)
     {
        std::swap(newString[i], newString[n - i - 1]);
     }
   return newString;
   }
} //namespace reverse_string 
