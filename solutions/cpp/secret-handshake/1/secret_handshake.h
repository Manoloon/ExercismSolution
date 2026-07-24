#if !defined(SECRET_HANDSHAKE_H)
#define SECRET_HANDSHAKE_H
#include <string>
#include <vector>
#include <bitset>

namespace secret_handshake 
{
    std::vector<std::string> commands(int number);
    std::bitset<5> toBinary(int n);
}  // namespace secret_handshake

#endif //SECRET_HANDSHAKE_H