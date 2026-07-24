#if !defined(GRADE_SCHOOL_H)
#define GRADE_SCHOOL_H

#include <map>
#include <vector>
#include <string>
using Roster = std::map <int,std::vector<std::string>>;
namespace grade_school
{
    class school
    {
    private:
        Roster m_roster;
    public:
        school()=default;
        void add(std::vector<std::string>names,int grade);
        void add(std::string names,int grade);
        const std::map <int,std::vector<std::string>> & roster() const;
        std::vector<std::string> grade(int grade) const;
    };
}

#endif // GRADE_SCHOOL_H