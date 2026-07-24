#include "diamond.h"
#include <iostream>

namespace diamond {
std::vector<std::string> rows(const char& input) 
  {
    int nInput = static_cast<int>(input) - 'A' + 1; // A = 65
    std::vector<std::string> result;
    // Upper half of the diamond
    for (int i = 0; i < nInput; ++i) 
    {
        std::string row;
        // add spaces
        row.append(nInput - i - 1, ' ');
        // Add characters
        row.push_back('A' + i);
        // add inner spaces
        if(i > 0)
        {
            row.append(2 * i -1 ,' ');
            row.push_back('A' + i);
        }
        // add trailing spaces
        row.append(nInput - i - 1, ' ');
        result.emplace_back(row);
    }

    // Lower half of the diamond
    for (int i = nInput - 2; i >= 0; --i) 
    {
        std::string row;
        // add spaces
        row.append(nInput - i - 1, ' ');
        // Add characters
        row.push_back('A' + i);
        // add inner spaces
        if(i > 0)
        {
            row.append(2 * i -1 ,' ');
            row.push_back('A' + i);
        }
        // add trailing spaces
        row.append(nInput - i - 1, ' ');
        result.emplace_back(row);
    }
    return result;
  }
}
// namespace diamond

    // int times = row+1;
    // char c = static_cast<char>(row+65);
    // std::string strings(times,c);
    // inputs.emplace_back(strings);
  //   int times = row;
  //   char c = static_cast<char>(row+65);
  //   std::string strings;
  //           for (int i = 0; i <= times; i++) 
  //           {
  //               strings += ' '; // Add spaces for the rest of the characters
  //               strings += c; // Add the character again
  //               strings += ' ';
  //           }
  //       inputs.emplace_back(strings);
  // }
  // for(int row = count-1; row > 0 ; row--)
  // {
  //     char c = static_cast<char>(nInput-row);
  //     std::string strings(1,c);
  //     inputs.emplace_back(strings);
  // }
  // return inputs;