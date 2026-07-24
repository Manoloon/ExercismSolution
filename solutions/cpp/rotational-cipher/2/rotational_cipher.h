//
// Created by Manoloon on 26/1/2024.
//

#ifndef EXERCISM_ROTATIONAL_CIPHER_H
#define EXERCISM_ROTATIONAL_CIPHER_H
#pragma once

#include <string>
namespace rotational_cipher {
    std::string rotate(std::string str, int n) {
        // assure that n is in between 0 and 25
        n = n % 26;
        for (auto &c: str) {
            // only take care of letters
            if(std::isalpha(c)){
                // determine the type of letters based in lower or uppercase
                char base = std::isupper(c) ? 'A' : 'a';
                // rotate the letters by n positions.
                c = static_cast<char>((c - base + n) % 26 + base);
            }
        }
        return str;
    }
}  // namespace rotational_cipher

#endif //EXERCISM_ROTATIONAL_CIPHER_H
