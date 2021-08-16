/*Prompt:
Write a program that computes the tax and tip on a restaurant bill for a patron with
a $44.50 meal charge. The tax should be 6.75 percent of the meal cost. The tip
should be 15 percent of the total after adding the tax. Display the meal cost,
tax amount, tip amount, and total bill on the screen.
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  double meal = 44.50,
         tax = .0675,
         tip = .15,
         mealTax,
         mealTaxTip,
         total;

mealTax = meal * tax;
mealTaxTip = (meal + mealTax) * tip;
total = meal + mealTax + mealTaxTip;

cout << "Cost of the meal: $" << meal << endl;
cout << "Tax amount: $" << setprecision(2) << fixed << mealTax << endl;
cout << "Tip amount: $" << setprecision(2) << fixed << mealTaxTip << endl;
cout << "Total amount due: $" << setprecision(2) << fixed << total << endl;

return 0;
}
