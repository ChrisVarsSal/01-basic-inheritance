/*
 * =====================================================================================
 *
 *       Filename:  example_01.cpp
 *
 *    Description:  Basic of inheritance
 *
 *        Created:  26/07/2020
 *
 *         Author:  Maikol Guzmán mikeguzman@gmail.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */

#include <iostream>  // allows program to output data to the screen

struct Base {
    Base(const int number) : memberNumber(number) {
    }
    void doSomething() {
        memberNumber += 2;
    }

    int memberNumber = 0;
};

struct Derived : Base {
    Derived() : Base(5) { }
    void doSomethingElse() {
        ++memberNumber;
    }
};

// function main begins program execution
int main(int argc, const char *argv[]) {
    std::cout << "Welcome to the UNA!" << std::endl;  // display message

    Derived derived;
    derived.doSomething();
    derived.doSomethingElse();

    std::cout << derived.memberNumber << '\n'; // What is printed?

    return 0;  // indicate that program ended successfully
}  // end function main