/*Prompt:
The East Coast sales division of a company generates 62 percent of total sales.
Based on that percentage, write a program that will predict how much the East Coast
division will generate of the company has $4.6 million in sales this year.
Display the result on the screen.
*/

#include <iostream>

using namespace std;

int main(){
  double percentage = 0.62,
        sales = 46E5,
        totalSales;

  totalSales = sales * percentage;

  cout << totalSales << endl;
  return 0;
}
