/*
*Nick Fuess
*2341608
*Assignment #1
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[]) {

  const float REGULAR_HOURLY_WAGE = 16.00;
  const float OT_RATE = 1.5;
  const float STATE_INCOME_TAX_RATE = 0.05;
  const float FED_INCOME_TAX_RATE = 0.14;
  const float SOCIAL_SECURITY_TAX_RATE = 0.06;
  const float MED_INSURANCE_EXPENSE = 10;

  short numHoursWorked = 0;
  short numOTHoursWorked = 0;
  float weeklyGrossWage = 0;
  float weeklyNetWage = 0;

  //Get Input
  cout << "Please enter the number of hours worked this week: ";
  cin >> numHoursWorked;
  cout << endl;

  //Consider OT
  if(numHoursWorked > 40){
    numOTHoursWorked = numHoursWorked - 40;
    numHoursWorked = 40;
    weeklyGrossWage = numOTHoursWorked * REGULAR_HOURLY_WAGE * OT_RATE;
  }

  //Calculate Gross Wage
  weeklyGrossWage += (numHoursWorked * REGULAR_HOURLY_WAGE);

  //Calculate Net Wage
  weeklyNetWage = weeklyGrossWage * (1 - (STATE_INCOME_TAX_RATE + FED_INCOME_TAX_RATE + SOCIAL_SECURITY_TAX_RATE));
  weeklyNetWage -= MED_INSURANCE_EXPENSE;

  //Format and Output Results
  cout << "Gross Pay\t\t\t\t$" << fixed << setprecision(2) << weeklyGrossWage << endl;
  cout << "\nTaxes" << endl;
  cout << "\tFederal Income Tax\t$" << fixed << setprecision(2) << weeklyGrossWage * FED_INCOME_TAX_RATE << endl;
  cout << "\tState Income Tax\t$" << fixed << setprecision(2) << weeklyGrossWage * STATE_INCOME_TAX_RATE << endl;
  cout << "\tSocial Security Tax\t$" << fixed << setprecision(2) << weeklyGrossWage * SOCIAL_SECURITY_TAX_RATE << endl;
  cout << "\nDeductions" << endl;
  cout << "\tMed Insurance Expense\t$" << fixed << setprecision(2) << MED_INSURANCE_EXPENSE << endl;
  cout << "\nNet Pay\t\t\t\t\t$" << fixed << setprecision(2) << weeklyNetWage << endl;

  return 0;
}
