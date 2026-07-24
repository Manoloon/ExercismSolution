#include "lasagna_master.h"

namespace lasagna_master {
    int preparationTime(const std::vector<std::string>& layers, int avg)
    {
        return layers.size() * avg;
    }
    amount quantities(const std::vector<std::string>& layers)
    {
        int noodle = 0;
        double sauce = 0.0;
        for(auto l : layers)
        {
            if(l == "noodles")
            {
                noodle += 50;
            }
            else if (l == "sauce")
            {
                sauce +=  0.2;
            }
        }
        return {noodle,sauce};
    }

    void addSecretIngredient(std::vector<std::string>& myList,const std::vector<std::string>& friendList)
    {
        myList[myList.size()-1] = friendList.back();
    }

    std::vector<double> scaleRecipe(const std::vector<double>& quantities, int numPortions)
    {
        std::vector<double> result;
        result.reserve(quantities.size());
        double factor = static_cast<double>(numPortions) /2;
        for(const double q : quantities)
        {
            result.emplace_back(q * factor);
        }
        return result;
    }

    void addSecretIngredient(std::vector<std::string>& myList, const std::string& secretIngredient)
    {
        myList[myList.size()-1] = secretIngredient;
    }
}  // namespace lasagna_master
