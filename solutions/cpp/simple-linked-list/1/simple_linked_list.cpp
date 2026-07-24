#include "simple_linked_list.h"
#include <iostream>
#include <stdexcept>

namespace simple_linked_list {

std::size_t List::size() const {
    // TODO: Return the correct size of the list.
    return current_size;
}

void List::push(int entry) {
    // TODO: Implement a function that pushes an Element with `entry` as data to
    // the front of the list.
    auto new_elem = std::make_unique<Element>(entry);
    if(size() > 0)
    {
    new_elem->next = std::move(head);
    }
    head = std::move(new_elem);
    current_size++;
}

int List::pop() {
    // TODO: Implement a function that returns the data value of the first
    // element in the list then discard that element.
    if(size() == 0) return 0;
    int result = head->data;
    auto new_head = std::move(head->next);
    head = std::move(new_head);
    current_size--;
    return result;
}

void List::reverse() {
    // TODO: Implement a function to reverse the order of the elements in the
    // list.
    if(size() == 0) return;
    std::unique_ptr<Element> prev = nullptr;
    std::unique_ptr<Element> curr = std::move(head);
    int s = static_cast<int>(size());
    for(int i = 0; i < s;++i)
    {
        auto next = std::move(curr->next);
        curr->next = std::move(prev);
        prev = std::move(curr);
        curr = std::move(next);
    }
    head = std::move(prev);
}

List::~List() {
    // TODO: Ensure that all resources are freed on destruction
}

}  // namespace simple_linked_list
