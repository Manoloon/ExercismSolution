#include "nucleotide_count.h"
#include <stdexcept>
namespace nucleotide_count
{
    std::map<char, int> count(const std::string& NewChain)
    {
        std::map<char, int> Nucleotides{ {'A', 0}, {'T', 0}, {'C', 0}, {'G', 0} };
         for(const char Nucleo: NewChain)
        {
            if(Nucleotides.find(Nucleo) == Nucleotides.end())
            {
                throw std::invalid_argument("Nucleotide invalid on Construction");
            }
            else
            {
                Nucleotides.at(Nucleo)++;
            }
        }
        return Nucleotides;
    }
}