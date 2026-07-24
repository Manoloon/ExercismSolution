#include "rna_transcription.h"
#include <map>
#include <stdexcept>
namespace rna_transcription
{
  std::map<const char,const char> GetRnaTable()
    {
        return {{'G','C'},{'C','G'},{'T','A'},{'A','U'}};;
    }
    char to_rna(const char &RnaStrand)
    {
       if (GetRnaTable().find(RnaStrand)  != GetRnaTable().end())
            return GetRnaTable().at(RnaStrand);
       return 0;
    }

    [[maybe_unused]] std::string to_rna(std::string_view RNAStrand)
    {
        std::string OutTable;
        for(const char &i : RNAStrand)
            if(GetRnaTable().find(i)  != GetRnaTable().end())
                OutTable += GetRnaTable().at(i);
        return OutTable;
    }
}
