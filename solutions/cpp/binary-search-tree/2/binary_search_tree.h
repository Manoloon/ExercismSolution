#pragma once
#include <vector>
#include <iostream>
#include <memory>
#include <stack>

namespace binary_search_tree {

template<typename T>
class binary_tree
{
    T m_data;
    std::unique_ptr<binary_tree> m_left;
    std::unique_ptr<binary_tree> m_right;
public:
    binary_tree(const T& value):m_data(value),m_left(nullptr),m_right(nullptr){}
    inline const std::unique_ptr<binary_tree>& left() const {return m_left;}
    inline const std::unique_ptr<binary_tree>& right() const {return m_right;}
    inline const T& data() const {return m_data;}

    void insert(const T& value);

    // Iterator impl.
    class iterator
    {
        void pushLeft(binary_tree<T>* node)
        {
            while (node)
            {
                path.push(node);
                node = node->left().get();
            }
        }
        std::stack<binary_tree<T>*> path;
        public:
        iterator(binary_tree<T>* node)
        {
           pushLeft(node);
        };
    
        iterator& operator++()
        {
            if(path.empty()) return *this;
            binary_tree<T>* node = path.top();
            path.pop();

            if(node->right())
            {
                pushLeft(node->right().get());
            }
            return *this;
        }
        bool operator==(const iterator& other) const
        {
            if(path.empty() && other.path.empty()) return true;
            if(path.empty() || other.path.empty()) return false;
            return path.top() == other.path.top();
        }
        bool operator!=(const iterator& other) const
        {
            return !(*this == other);
        }
        const T& operator*() const
        {
            if(path.empty())
            {
                throw std::out_of_range("Iterator out of range");
            }
            return path.top()->data();
        }
    };

    iterator begin()
    {
        return iterator{this};
    }
    iterator end()
    {
        return iterator{nullptr};
    }
};

template <typename T>
inline void binary_tree<T>::insert(const T &value)
{
    // el valor es menor voy a la izq
    if (value <= m_data)
    {   
        // Existe hijo?
        if (m_left != nullptr)
        {
            m_left->insert(value);
        }
        else // lo creo
        {
            m_left = std::make_unique<binary_tree>(value);
            return;
        }
    }
    else // el valor es mayor voy a la derecha
    {
        if (m_right != nullptr)
        {
            m_right->insert(value);
        }
        else
        {
            m_right = std::make_unique<binary_tree>(value);
        }
    }
}

} // namespace binary_search_tree
