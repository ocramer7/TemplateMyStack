/* Owen Cramer
 * FRCC CSC2034
 * myStack Program
 */
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>
#include "myStack.h"

using namespace std; // using the std namespace
using namespace Stack;

int main() {
    myStack<string> *stp;
    char t[80];
    char* n;
    ifstream ins;
    string x;

    ins.open("../myStack.txt"); // Open the expression file

    if (ins.fail()) { // Check if file exists
        cout << "error opening file" << endl;
        exit(1);
    }

    while (ins.getline(t, 80, '\n')) {
        n = strtok(t, " \0");
        while (n != nullptr) {
            x = stp->pop();
            stp->push(x);
            n = strtok(nullptr, " \0");
        }
    }

    stp->print(cout);
    cout << endl;

    cout << "done" << endl;
    ins.close();
}