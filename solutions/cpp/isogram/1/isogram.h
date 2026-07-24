#if !defined(ISOGRAM_H)
#define ISOGRAM_H
#include <string>

namespace isogram {
    bool is_isogram(const std::string& str)
    {
        if(str.empty())
        {
            return true;
        }
        std::string temp;
        
        for(auto c : str)
        {
            if(!std::isalpha(c))
            {
                continue;
            }
            c = std::tolower(c);
            if (temp.find(c) != std::string::npos)
            {
                return false;
            }
            temp += c;
        }
        return true;
    }
}  // namespace isogram

#endif // ISOGRAM_H