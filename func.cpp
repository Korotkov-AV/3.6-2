#include "func.h"


    Counter:: Counter(int num1) {
    this->num1 = num1;
}


    void Counter :: add() {
        num1++;
    }

    void Counter::subtract() {
        num1--;
    }

    void Counter::print() {
        std::cout << num1 << std::endl;
    }


