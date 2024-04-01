#include <string>
#include <iostream>

double exp(double base, int exp);
double total_investment(double investment, int months);

class Investment_plan {
  double shares_price;
  double investment;
  int months;
  double interest;

  public:
  Investment_plan(double add_shares_price, double add_monthly_investment, int add_months, double add_interest_rate);
  double get_total();
};

template <typename T>
T menu_in(T &var, int &menu){
  const std::array<std::string, 5> states = {
    "Add the initial share's price: ",
    "Add the monthly investment: ",
    "Add the total months of your plan: ",
    "Add the monthly interest rate: ",
    "The price of your shares at the end of your plan is: "
  };
  std::cout << states[menu];
  std::cin >> var;
  menu++;
  return  var;
}
