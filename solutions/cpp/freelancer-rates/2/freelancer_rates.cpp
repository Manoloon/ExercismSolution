// INFO: Headers from the standard library should be inserted at the top via
// #include <LIBRARY_NAME>
#include <cmath>
// daily_rate calculates the daily rate given an hourly rate
double daily_rate(double hourly_rate) {
    // TODO: Implement a function to calculate the daily rate given an hourly
    // rate
    return hourly_rate * 8;
}

// apply_discount calculates the price after a discount
double apply_discount(double before_discount, double discount) {
    // TODO: Implement a function to calculate the price after a discount.
    double result = before_discount;

    if(discount > 0.0f)
    {
        double discountCalc = discount * 0.01;
        double disc = (result * discountCalc);
        result -= disc;
    }
    return result;
}

// monthly_rate calculates the monthly rate, given an hourly rate and a discount
// The returned monthly rate is rounded up to the nearest integer.
int monthly_rate(double hourly_rate, double discount) {
    // TODO: Implement a function to calculate the monthly rate, and apply a
    // discount.
    double monthlyNoDisc = std::ceil(daily_rate(hourly_rate) * 22);
    double withDiscount = apply_discount(monthlyNoDisc,discount);
    return std::ceil(withDiscount);
}

// days_in_budget calculates the number of workdays given a budget, hourly rate,
// and discount The returned number of days is rounded down (take the floor) to
// the next integer.
int days_in_budget(int budget, double hourly_rate, double discount) {
    // TODO: Implement a function that takes a budget, an hourly rate, and a
    // discount, and calculates how many complete days of work that covers.
    double dailyRate = daily_rate(hourly_rate);
    if(discount > 0)
    {
        double dailyRateWithDiscount = apply_discount(dailyRate,discount);
        return std::floor(budget / dailyRateWithDiscount);
    }
    return (budget/dailyRate);    
}