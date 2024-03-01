#include "GroceryCounter.hpp"
#include <iostream>

using namespace std;

GroceryCounter::GroceryCounter() {
    
    tens_place = 0;
    ones_place = 0;
    tenths_place = 0;
    hundredths_place = 0;
    overflow_count = 0;
    
}

int GroceryCounter::number_of_overflow() {

    return overflow_count;

}

int GroceryCounter::tens() {

    if (tens_place == 9) {
        overflow_count++;
        tens_place = 0;
    }

    else {
        tens_place++;
    }

    return tens_place;

}

int GroceryCounter::ones() {

    if (ones_place == 9) {
        tens();
        ones_place = 0;
    }

    else {
        ones_place++;
    }

    return ones_place;

}

int GroceryCounter::tenths() {

    if (tenths_place == 9) {
        ones();
        tenths_place = 0;
    }

    else {
        tenths_place++;
    }

    return tenths_place;

}

int GroceryCounter::hundredths() {

    if (hundredths_place == 9) {
        tenths();
        hundredths_place = 0;
    }

    else {
        hundredths_place++;
    }

    return hundredths_place;

}

void GroceryCounter::clear() {

    tens_place = 0;
    ones_place = 0;
    tenths_place = 0;
    hundredths_place = 0;
    overflow_count = 0;

}

void GroceryCounter::total() {

    if (tens_place == 0) {
        cout << "$" << ones_place << "." << tenths_place << hundredths_place << endl;
    }

    else {
        cout << "$" << tens_place << ones_place << "." << tenths_place << hundredths_place << endl;
    }

}

