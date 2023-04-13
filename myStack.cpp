/* Owen Cramer
 * FRCC CSC2034
 * Logic for myStackTest
 */

#include <iostream>
#include <ios>
#include <fstream>
#include "myStack.h"

using namespace std;

namespace Stack {
    template <typename T>
    myStack<T>::myStack() {}; // constructor

    template <typename T>
    myStack<T>::~myStack() { // destructor
        data.~vector();
    }

    template <typename T>
    void myStack<T>::push(T) { // adds an element to the top of the stack
        data.push_back();
    }

    template <typename T>
    T myStack<T>::pop() { // Removes the topmost element of the stack
        T n = 0;
        if (!isEmpty()) {
            n = data.back();
            data.pop_back();
        }
        return n;
    }

    template <typename T>
    bool myStack<T>::isEmpty() { // Checks if the stack is empty
        return data.empty();
    }

    template <typename T>
    void myStack<T>::print(ostream& outs) {
        if (!isEmpty()) outs << this;
    }

    template <typename T>
    std::ostream& operator << (std::ostream& outs, myStack<T>* p) {
        if (p->isEmpty())
            outs << "stack is empty" << std::endl;
        else {
            for (auto it = p->data.begin(); it != p->data.end(); ++it) {
                outs << *it << " ";
            }
        }
        return outs;
    }
}