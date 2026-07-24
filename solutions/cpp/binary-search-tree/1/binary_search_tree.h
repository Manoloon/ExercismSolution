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
        std::stack<binary_tree<T>*> path;
        public:
        binary_tree<T>* current;
        iterator& operator++()
        {
            if(current->right())
            {
                current = current->right().get();
                while (current->left())
                {
                    current = current->left().get();
                }
            }
            else
            {
                binary_tree<T>* root = current;
                while (root && current == root->right().get())
                {
                    current = root;
                    root = current->root;
                }
                current = root;
            }
            return *this;
            // algoritmo
            /*
                 4
                / \
                2  6
               / \
               1 3
            current = 1 path.top();
            stack = 4,2,1 

            */
        }
        bool operator!=(const iterator& other)
        {
            return current != other.current;
        }
        const T& operator*() const
        {
            return current->data();
        }
    };

    iterator begin()
    {
        binary_tree<T>* n = this;
        if(n)
        {
            while (n->m_left)
            {
                n = n->m_left.get();
            }
            return n;
        }
        return nullptr;
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
            std::cout << "es menor :" << (int)value << " : " << (int) m_data << '\n'; 
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
            std::cout << "es mayor :" << (int)value << " : " << (int) m_data << '\n'; 
            m_right = std::make_unique<binary_tree>(value);
        }
    }
}

} // namespace binary_search_tree
