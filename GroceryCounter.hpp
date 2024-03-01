
class GroceryCounter {

    private:
    int tens_place;
    int ones_place;
    int tenths_place;
    int hundredths_place;
    int overflow_count;

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