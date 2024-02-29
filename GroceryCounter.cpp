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

int GroceryCounter::get_tens_place() {

    return tens_place;

}

int GroceryCounter::get_ones_place() {

    return ones_place;

}

int GroceryCounter::get_tenths_place() {

    return tenths_place;

}

int GroceryCounter::get_hundredths_place() {

    return hundredths_place;

}

int GroceryCounter::get_overflow_count() {

    return overflow_count;

}

int GroceryCounter::number_of_overflow() {

    return overflow_count;

}

int GroceryCounter::tens() {

    get_tens_place();
    get_overflow_count();

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

    get_ones_place();
    get_tens_place();

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

    get_tenths_place();
    get_ones_place();

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

    get_hundredths_place();
    get_tenths_place();

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

    get_tens_place();
    get_ones_place();
    get_tenths_place();
    get_hundredths_place();
    get_overflow_count();

    tens_place = 0;
    ones_place = 0;
    tenths_place = 0;
    hundredths_place = 0;
    overflow_count = 0;

}

void GroceryCounter::total() {
    
    get_tens_place();
    get_ones_place();
    get_tenths_place();
    get_hundredths_place();
    get_overflow_count();

    if (overflow_count == 0 && tens_place != 0) {
        cout << "$" << tens_place << ones_place << "." << tenths_place << hundredths_place << endl;
    }

    else if (overflow_count == 0 && tens_place == 0) {
        cout << "$" << ones_place << "." << tenths_place << hundredths_place << endl;
    }

    else {
        cout << "$" << overflow_count << tens_place << ones_place << "." << tenths_place << hundredths_place << endl;
    }

}

