#include "pangram.h"
#include <vector>
#include <string>
namespace pangram {
    bool is_pangram(std::string Phrase)
    {
        std::vector<bool>Marked(26, false);
        int index;
        for(auto it:Phrase)
        {
            if('A'<=it && it<='Z')
            {
                index=it-'A';
            }
            else if('a'<=it && it<='z')
            {
                index=it-'a';
            }
            else
            {
                continue;
            }
            Marked[index]=true;
        }
        for (int i=0;i<25;i++)
        {
            if(!Marked[i])
            {
                return (false);
            }
        }
        return (true);
    }
}  // namespace pangram
