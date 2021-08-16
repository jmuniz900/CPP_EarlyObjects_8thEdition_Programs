/*Prompt:
Write a program that calculates how much a student organization earns during its
fund raising candy sale. The program should prompt the user to enter the number
of candy bars sold and the amount the organization earns for each bard sold.
It should then calculate and display the total amount earned.
*/

#include <iostream>
using namespace std;

int main(){
  double candyBarsSold, priceCandyBar, totalSales;

  cout << "Enter amount of candy bars sold:\n";
  cin >> candyBarsSold;

  cout << "Enter price of a single candy bar:\n";
  cin >> priceCandyBar;

  totalSales = candyBarsSold * priceCandyBar;
  cout << "Total sales: $" << totalSales << endl;

  return 0;
}
