/* Owen Cramer
 * FRCC 2034
 * Header file for myStack
 */

#ifndef MYSTACK_MYSTACK_H
#define MYSTACK_MYSTACK_H

#include <iostream>
#include <ios>
#include <fstream>
#include <vector>
#include "myStack.h"

using namespace std;

namespace Stack {
    template <typename T>
    class myStack {
    private:
        std::vector<T> data;
    public:
        myStack(); // constructor
        //myStack(const myStack&) = default; // = delete;
        ~myStack(); // destructor

        // member functions
        void push(T);
        T pop();
        bool isEmpty();
        void print(std::ostream& = std::cout);

        // non-member functions
        //template <typename T> // <-- If I add this line, I get "Declaration of 'T' shadows template parameter,
        // template parameter is declared here
        friend std::ostream& operator << (std::ostream&, myStack<T>*);
    };
}

namespace Stack {
    template <typename T>
    myStack<T>::myStack() = default; // constructor

    template <typename T>
    myStack<T>::~myStack() { // destructor
        data.~vector();
    }

    template <typename T>
    void myStack<T>::push(T item) { // adds an element to the top of the stack
        data.push_back(item);
    }

    template <typename T>
    T myStack<T>::pop() { // Removes the topmost element of the stack
        T n = 0; // Variable n is initialized here
        if (!isEmpty()) {
            n = data.back(); // Did not find any errors here
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
            for (typename std::vector<T>::iterator it = p->data.begin(); it != p->data.end(); ++it) {
                outs << *it << " ";
            }
        }
        return outs;
    }
}
#endif //MYSTACK_MYSTACK_H
