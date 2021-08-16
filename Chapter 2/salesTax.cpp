/*Prompt:
Write a program that computes the total sales tax on a $52 purchase. Assume the
state's sales tax is 4 percent and the county sales tax is 2 percent. Display the
purchase price, state tax, county tax, and total tax amounts on the screen.
*/

#include <iostream>
using namespace std;

int main(){

double stateTax = 0.04,
       countyTax = 0.02,
       stateTaxTotal,
       countyTaxTotal,
       totalTax;

int purchase = 52;

stateTaxTotal = purchase * stateTax;
countyTaxTotal = purchase * countyTax;
totalTax = stateTaxTotal + countyTaxTotal;

cout << "Purchase price of item: " << purchase << endl;
cout << "State tax of purchase: " << stateTaxTotal << endl;
cout << "County tax of purchase: " << countyTaxTotal << endl;
cout << "Total tax: " << totalTax << endl;
cout << "Total purchase price: " << purchase + totalTax << endl;
return 0;
}
