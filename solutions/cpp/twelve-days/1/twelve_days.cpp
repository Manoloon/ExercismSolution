#include "twelve_days.h"
#include <unordered_map>

namespace twelve_days {
std::unordered_map<int,std::string> Daymap
{
    {1,"first "},
    {2,"second "},
    {3,"third "},
    {4,"fourth "},
    {5,"fifth "},
    {6,"sixth "},
    {7,"seventh "},
    {8,"eighth "},
    {9,"ninth "},
    {10,"tenth "},
    {11,"eleventh "},
    {12,"twelfth "}
};
std::unordered_map<int,std::string> Carols
{
    {1,"a Partridge in a Pear Tree"},
    {2,"two Turtle Doves"},
    {3,"three French Hens"},
    {4,"four Calling Birds"},
    {5,"five Gold Rings"},
    {6,"six Geese-a-Laying"},
    {7,"seven Swans-a-Swimming"},
    {8,"eight Maids-a-Milking"},
    {9,"nine Ladies Dancing"},
    {10,"ten Lords-a-Leaping"},
    {11,"eleven Pipers Piping"},
    {12,"twelve Drummers Drumming"}
};
    const std::string recite(int begin, int end) 
    { 
        if(begin != end )
        {
            std::string result = {};
            for(int i = begin; i <=end;i++)
            {
                result += phrase(i);
                if(i != end)
                {
                    result += '\n';
                }
            }
            return result;
        }
        return phrase(end);
    }

    const std::string phrase(int n) 
    {
        int count = n;
        std::string result = "On the " + Daymap.at(n) + "day of Christmas my true love gave to me: ";
        while (count > 0)
        {
            if(count == 1 && n > 1)
            {
                result += "and ";
            }
            result += Carols.at(count);
            if(count != 1)
            {
                result +=", ";
            }
            count--;
        }
        return result + ".\n";
    }

} // namespace twelve_days
