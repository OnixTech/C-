#include "fns.hpp"

Investment_plan::Investment_plan(double add_price, double add_investment, int add_months, double add_interest)
: shares_price(add_price), investment(add_investment), months(add_months), interest(add_interest){}

double Investment_plan::get_total(){
  double interest_rate_decimal = interest * 0.01;
  double const_interest = exp(( 1 + interest_rate_decimal), months);
  return ( shares_price * const_interest)+ ( investment * ((const_interest - 1) / interest_rate_decimal));
}

double exp(double base, int exp){
  double result = 1;

  for( int i = exp; i > 0; i--){
    result = result * base;
  }

  return result;
}

double total_investment(double investment, int months){
  return investment * months;
}
