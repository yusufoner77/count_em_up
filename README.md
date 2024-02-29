# count_em_up

This code contains a class that represent a grocery counter. The counter is
able to hold any valid 4-digit value between 0000 and 9999. When the counter 
overflows (i.e. goes above 9999), it will wrap back around and increment from
zero again. When you run the total() command, it will pretty print out a dollar
amount for all of your groceries. When you run the clear() command, it will reset
the counter to zero. If you call the number_of_overflows() command, it will
tell you how many times the counter has wrapped back around after exceeding 9999.


In order to use this program, you will need to be able to compile and run C++ 
code on your machine.

To run the test suite:
g++ test.cpp GroceryCounter.cpp && ./a.out

To run the driver program:
g++ main.cpp GroceryCounter.cpp && ./a.out