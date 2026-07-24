#if !defined(CIRCULAR_BUFFER_H)
#define CIRCULAR_BUFFER_H
#include <stdexcept>
#include <deque>

namespace circular_buffer {
    template <typename T>
    class circular_buffer{
    public:
        circular_buffer(int Size):max_size(Size)
        {
            if(Size <=0)
            {
                throw std::domain_error("number should be > 0");
            }
        }

        int read()
        {
            if(buffer.empty())
            {
                throw std::domain_error ("data not found");
                return T();
            }
            T value = buffer.front();
            buffer.pop_front();
            return value;
        }

        void write(const T& value)
        {
            buffer.push_back(value);
        }
    private:

        size_t max_size;
        std::deque<int> buffer;
    };
}// namespace circular_buffer

#endif // CIRCULAR_BUFFER_H