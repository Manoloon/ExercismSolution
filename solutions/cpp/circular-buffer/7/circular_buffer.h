#if !defined(CIRCULAR_BUFFER_H)
#define CIRCULAR_BUFFER_H
#include <stdexcept>
#include <memory>

namespace circular_buffer
{
    template<class T>
    class circular_buffer
    {
        size_t max_size = 0;
        size_t head = 0;
        size_t tail = 0;
        std::unique_ptr<T[]> buffer;
        bool isFull=false; 
        bool size()
        {
            if(isFull) return max_size;
            if(head >= tail) return head - tail;
            return max_size - (tail - head);
        }
        bool isEmpty()
        {
            return (!isFull && head == tail);
        }
    public:
        circular_buffer(size_t size) : max_size(size),buffer(std::make_unique<T[]>(max_size))
        {
            if (max_size < 1) 
            { 
                throw std::domain_error("number should be at least 1"); 
            }
        }
        
        T read()
        {
            if(isEmpty()) 
            {
                throw std::domain_error("empty");
            }
            T val = buffer.get()[tail];
            tail = (tail + 1) % max_size;
            isFull = false;
            return val;
        }

        void write(T value)
        {
            if(isFull)
            {
                throw std::domain_error("is Full");
            }
            buffer.get()[head] = value;
            head = (head + 1) % max_size;
            if(head == tail)
            {
               isFull=true;
            }
        }
    
        void overwrite(T value)
        {
            if(tail >= head) 
            {
                read();
            }
            write(value);
        }
    
        void clear()
        {
            head = 0;
            tail = 0;
            isFull = false;
        }
    };
} // namespace circular_buffer

#endif // CIRCULAR_BUFFER_H