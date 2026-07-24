#if !defined(PARALLEL_LETTER_FREQUENCY_H)
#define PARALLEL_LETTER_FREQUENCY_H
#include <vector>
#include <unordered_map>
#include <string_view>

namespace parallel_letter_frequency {
        std::unordered_map<char,int> frequency(std::vector<std::string_view> input);
}

#endif

