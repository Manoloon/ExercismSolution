#if !defined(ETL_H)
#define ETL_H
#include <vector>
#include <map>
#include <cctype>
namespace etl {
    std::map<char,int> transform(const std::map<int,std::vector<char>> input){
        std::map<char,int> result;
        for(const auto& i : input){
            int val = i.first;
                for(const auto& ch : i.second){
                result.insert(std::make_pair(std::tolower(ch),val));   
                }
        }
        return result;
    }
}  // namespace etl

#endif // ETL_H