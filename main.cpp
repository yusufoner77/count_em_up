#include <iostream>
#include "GroceryCounter.hpp"

using namespace std;


int main() {

GroceryCounter grocery_counter;

// This will show that we start at $0.00
grocery_counter.total();

// This will set our starting total to $99.99
for (int i = 0; i < 9; i++) {
    grocery_counter.tens();
}

for (int i = 0; i < 9; i++) {
    grocery_counter.ones();
}

for (int i = 0; i < 9; i++) {
    grocery_counter.tenths();
}

for (int i = 0; i < 9; i++) {
    grocery_counter.hundredths();
}
grocery_counter.total();

// This will show that all overflows work properly, should output $0.00
grocery_counter.hundredths();
grocery_counter.total();

// This will set our starting total to $12.34
for (int i = 0; i < 1; i++) {
    grocery_counter.tens();
}

for (int i = 0; i < 2; i++) {
    grocery_counter.ones();
}

for (int i = 0; i < 3; i++) {
    grocery_counter.tenths();
}

for (int i = 0; i < 4; i++) {
    grocery_counter.hundredths();
}
grocery_counter.total();

// This will test all of the increments, without overflows. Should output $34.45
grocery_counter.tens();
grocery_counter.tens();
grocery_counter.ones();
grocery_counter.ones();
grocery_counter.tenths();
grocery_counter.hundredths();
grocery_counter.total();

// Showing that clear works properly
grocery_counter.clear();
grocery_counter.total();

}