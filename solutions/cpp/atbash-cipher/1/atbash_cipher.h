#if !defined(ATBASH_CIPHER_H)
#define ATBASH_CIPHER_H
#include <string>
#include <string_view>
#include <algorithm>

namespace atbash_cipher {
    const std::string plain = "abcdefghijklmnopqrstuvwxyz";
    const std::string cipher = "zyxwvutsrqponmlkjihgfedcba";

    std::string encode(std::string entry)
    {
        if(entry.empty())
        {
            return "";
        }
        std::string result;
        const size_t EntryLength = entry.size();
        for(size_t i = 0; i < EntryLength; i++)
        {
            // if empty space
            if(std::isspace(static_cast<unsigned char>(entry[i]))) continue;
            // if punctuation
            if(std::ispunct(entry[i])) continue;
            auto place = plain.find(std::tolower(entry[i]));
            // if number
            if(place == std::string::npos)
            {
                result += entry[i];
            }
            else
            {
                result += cipher[place];
            }
            // calc interval
            if((result.size() + 1) % 6 == 0 && i < EntryLength - 2)
            {
                result += ' ';
            }
        }
        return result;
    }
    std::string decode (std::string entry)
    {
        if(entry.empty())
        {
            return "";
        }
        std::string result;
        // if empty space
        const size_t EntryLength = entry.size();
        for(size_t i =0;i<EntryLength;i++)
        {
            if(std::isspace(static_cast<unsigned char>(entry[i]))) continue;
            auto place = cipher.find(std::tolower(entry[i]));
            // if number
            if(place == std::string::npos)
            {
                result += entry[i];
            }
            else
            {
                result += plain[place];
            }
        }
        return result;
    }
}  // namespace atbash_cipher

#endif // ATBASH_CIPHER_H