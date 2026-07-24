#if !defined(NUCLEOTIDE_COUNT_H)
#define NUCLEOTIDE_COUNT_H
#include<string>
#include <map>
namespace nucleotide_count
{
    class counter
    {
    private:
        std::string Chain;
        std::map<char, int> Nucleotides{ {'A', 0}, {'T', 0}, {'C', 0}, {'G', 0} };
    public:
       explicit counter(std::string NewChain);
        int count(char NucleoTide) const;

        [[maybe_unused]] [[nodiscard]] std::map<char,int> nucleotide_counts() const;
    };
}
#endif // NUCLEOTIDE_COUNT_H