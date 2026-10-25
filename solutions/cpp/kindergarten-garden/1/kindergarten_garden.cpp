#include "kindergarten_garden.h"
#include <cctype>
#include <map>

namespace kindergarten_garden {

std::map<char,Plants> PlantCode
{
    {'C',Plants::clover},
    {'G',Plants::grass},
    {'V',Plants::violets},
    {'R',Plants::radishes}
};
std::map<std::string,int> Childs
{
    {"Alice",0},
    {"Bob",2},
    {"Charlie",4},
    {"David",6},
    {"Eve",8},
    {"Fred",10},
    {"Ginny",12},
    {"Harriet",14},
    {"Ileana",16},
    {"Joseph",18},
    {"Kincaid",20},
    {"Larry",22},
};
std::array<Plants, 4> plants(const std::string &seeds,
                             const std::string &ChildName) 
{
    std::array<Plants,4> result;
    int count = 0;
    auto childPos = Childs.find(ChildName)->second;
    int countWinPos=0;
    for(const auto& c : seeds)
    {
        if(isupper(c))
        {
            if(countWinPos == childPos || countWinPos == childPos+1)
            {
                auto code = PlantCode.find(c);
                if(code != PlantCode.end())
                {
                    result[count] = code->second;
                    count++;
                }
            }
            countWinPos++;
        }
        else
        {
            countWinPos=0;
        }
    }
  return result;
}

} // namespace kindergarten_garden
