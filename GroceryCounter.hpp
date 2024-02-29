
class GroceryCounter {

    private:
    int tens_place;
    int ones_place;
    int tenths_place;
    int hundredths_place;
    int overflow_count;
    int get_tens_place();
    int get_ones_place();
    int get_tenths_place();
    int get_hundredths_place();
    int get_overflow_count();

    public:
   
    GroceryCounter();
    int tens();
    int ones();
    int tenths();
    int hundredths();
    int number_of_overflow();
    void clear();
    void total();
    
};