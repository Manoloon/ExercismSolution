#pragma once
#include <memory>
#include <stdexcept>

namespace linked_list {

template<typename T>  
class List
{
    struct Node
    {
        T data;
        // non-owning back-link
        Node* prev = nullptr;
        std::unique_ptr<Node> next;
        explicit Node(T value,std::unique_ptr<Node> next_node = nullptr): data(value),next(std::move(next_node)){};
    }; 
    std::unique_ptr<Node> head;
    // it does not own anything
    Node* tail = nullptr;
    std::size_t current_size = 0;

    public:
    List()=default;
    ~List()=default;
    // avoid copy and moving
    List(const List&) = delete;
    List& operator=(const List&) = delete;
    List(List&&) = delete;
    List& operator=(List&&) = delete;
    // adds an element to the end of the list
    void push(T data)
    {
        auto new_node = std::make_unique<Node>(std::move(data));
        new_node->prev = tail;
        if(current_size == 0)
        {
            head = std::move(new_node);
            tail = head.get();
        }
        else
        {
            tail->next = std::move(new_node);
            tail = tail->next.get();
        }
        current_size++;
    }
// removes and returns the last element of the list
// raise exception if empty
    T pop()
    {
        if(!tail)
        {
            throw std::runtime_error("List is Empty");
        }
        T new_data = tail->data;
        auto node = std::move(tail->prev);
        tail = std::move(node);
        current_size--;
        return new_data;
    }
// removes and returns the first element of the list
// raise exception if empty
    T shift()
    {
        if(current_size == 0) 
        {
            throw std::runtime_error("List is Empty");
        }
        T new_data = head->data;
        auto node = std::move(head->next);
        head = std::move(node);
        current_size--;
        return new_data;
    }
// adds an element to the start of the list
    void unshift(const T& data)
    {
        auto new_node = std::make_unique<Node>(std::move(data));
        current_size++;
        new_node->prev = nullptr;
        if(head)
        {
            head->prev = new_node.get();
            new_node->next = std::move(head);
            head = std::move(new_node);
        } 
        else 
        {
            tail = new_node.get();
            head = std::move(new_node);
        }
    }
    // returns the total number of elements in the current list
    size_t count() const {return current_size;}
//  will take one argument, which is the value to be removed from the linked list
// If the value appears more than once, only the **first** occurrence should be removed.
// It should return if an element was deleted or not.
    bool erase(const T& data)
    {
        if (current_size == 0)
        {
            return false;
        }
        // caso 1 Head contiene data
        if (data == head->data)
        {
            head = std::move(head->next);
            if(head)
            {
                head->prev = nullptr;
            }
            else 
            {
                tail = nullptr;
            }
            current_size--;
            return true;
        }
        auto current_node = head.get();
        while(current_node->next)
        {
            if (current_node->next->data == data)
            {
                auto to_remove = std::move(current_node->next);
                current_node->next = std::move(to_remove->next);
                if(current_node->next)
                {
                    current_node->next->prev = current_node;
                }
                else
                {
                    tail = current_node;
                }
                current_size--;
                return true;
            }
            current_node = current_node->next.get();
        }
        return false;
    }
};

}  // namespace linked_list
