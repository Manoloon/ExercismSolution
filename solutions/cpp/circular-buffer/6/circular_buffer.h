#if !defined(CIRCULAR_BUFFER_H)
#define CIRCULAR_BUFFER_H
/*
    lets do this properly
*/
#include <stdexcept>
#include <memory>
#include <iostream>

namespace circular_buffer
{
    template<class T>
    class circular_buffer
    {
        int max_size = 0;
        int head = 0;
        int tail = 0;
        std::unique_ptr<T[]> buffer;

    public:
        circular_buffer(int size) : max_size(size),buffer(std::make_unique<T[]>(max_size))
        {
            if (max_size < 1) 
            { 
                throw std::domain_error("number should be at least 1"); 
            }
        }

        T read();
        void write(T value);
        void overwrite(T value);
        void clear();
    };

    template <class T>
    inline T circular_buffer<T>::read()
    {
        if(head == tail) 
        {
            throw std::domain_error("empty");
        }
        auto val = buffer[tail];
        tail = (tail + 1) % max_size;
        return val;
    }

    template <class T>
    inline void circular_buffer<T>::write(T value)
    {
        if((head + 1) % max_size == tail )
        {
            throw std::domain_error("full");
        }
        buffer[head] = value;
        head = (head + 1) % max_size;
        // if(head == tail)
        // {
        //     tail = (tail + 1) % max_size;
        // }
    }

    template <class T>
    inline void circular_buffer<T>::overwrite(T value)
    {
        if(tail >= head) 
        {
            read();
        }
        write(value);
    }

    template <class T>
    inline void circular_buffer<T>::clear()
    {
        head = tail;
    }

} // namespace circular_buffer

#endif // CIRCULAR_BUFFER_H