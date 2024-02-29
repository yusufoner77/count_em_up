#include <cassert>
#include <iostream>
#include "GroceryCounter.hpp"

using namespace std;

int main() {

    GroceryCounter grocery_counter;

    for (int i = 0; i < 9; i++) {
        grocery_counter.tens();
    }

    for (int i = 0; i < 5; i++) {
        grocery_counter.ones();
    }

    for (int i = 0; i < 3; i++) {
        grocery_counter.tenths();
    }

    for (int i = 0; i < 8; i++) {
        grocery_counter.hundredths();
    }



    cout << "Starting tests..." << endl;

    assert(grocery_counter.tens() == 0 );
    assert(grocery_counter.ones() == 6);
    assert(grocery_counter.tenths() == 4);
    assert(grocery_counter.hundredths() == 9);
    assert(grocery_counter.hundredths() == 0);
    assert(grocery_counter.number_of_overflow() == 1);
    assert(grocery_counter.tenths() == 6);
    assert(grocery_counter.ones() == 7);
    assert(grocery_counter.tens() == 1);
    

    cout << "Your tests passed!" << endl;
}