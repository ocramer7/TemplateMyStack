/* Owen Cramer
 * FRCC 2034
 * Header file for myStack
 */

#ifndef MYSTACK_MYSTACK_H
#define MYSTACK_MYSTACK_H

#include <iostream>
#include <vector>

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
        friend std::ostream& operator << (std::ostream&, myStack<T>*);
    };
}
#endif //MYSTACK_MYSTACK_H
