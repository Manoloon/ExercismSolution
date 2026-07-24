#if !defined(NUCLEOTIDE_COUNT_H)
#define NUCLEOTIDE_COUNT_H
#include<string>
#include <map>
namespace nucleotide_count
{
    std::map<char, int> count(const std::string& NucleoTide);
}
#endif // NUCLEOTIDE_COUNT_H