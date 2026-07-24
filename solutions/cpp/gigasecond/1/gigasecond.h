#if !defined(GIGASECOND_H)
#define GIGASECOND_H
#include <string>
#include "boost/date_time/posix_time/posix_time.hpp"
using namespace boost::posix_time;
namespace gigasecond {
    ptime advance(const ptime& StartTime){
        time_duration OneGigasecond = seconds(1000000000);
        return StartTime + OneGigasecond;
    }
}  // namespace gigasecond

#endif // GIGASECOND_H