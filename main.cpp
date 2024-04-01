#include <iostream>
#include "fns.hpp"

int main(){
  double share_price;
  double monthly_investment;
  int months;
  double interest_rate;
  int menu = 0;
  
  while(menu < 4){
    switch (menu)
    {
      case 0:
        share_price = menu_in(share_price, menu);
        break;
      case 1:
        monthly_investment = menu_in(monthly_investment, menu);
        break;
      case 2:
        months = menu_in(months, menu);
        break;
      case 3:
        interest_rate = menu_in(interest_rate, menu);
        break;
    }
  }

  Investment_plan plan( share_price, monthly_investment, months, interest_rate);

  std::cout << "The price of your shares at the end of your plan is: ";
  std::cout << plan.get_total() << "\n";
}
