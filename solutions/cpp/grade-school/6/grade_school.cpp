#include "grade_school.h"
#include <algorithm>

namespace grade_school
{
    const std::map <int,std::vector<std::string>> & school::roster() const
    {
        return m_roster;
    }

    const std::vector<std::string> school::grade(const int grade) const
    {
        auto i = m_roster.find(grade);
        static std::vector<std::string> emptyNameList;
        if(i == m_roster.end())
        {
            return emptyNameList;
        }
        else
        {
            return i->second;
        }
    }
    void school::add(const std::string & name, const int grade)
    {
        // const ref avoiding copying the map.
        auto& allStudentOfGrade = m_roster[grade];
        auto upperIt =   std::upper_bound(allStudentOfGrade.begin(), allStudentOfGrade.end(), name);
        allStudentOfGrade.insert(upperIt,name);
    }
}