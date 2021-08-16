/*Prompt:
Write a program that calcuates how much a little league baseball team spent last
year to purchase new baseballs. The program should prompt the user to enter the
number of baseballs purchased and the cost of each baseball. It should then
calculate and display the total amount spent to purchase the baseballs.
*/

#include <iostream>
using namespace std;

int main(){
  double numBaseballs, costBaseball, totalCost;

  cout << "Enter the amount of baseballs bought: \n\a";
  cin >> numBaseballs;

  cout << "Enter the cost of a single baseball: \n";
  cin >> costBaseball;

  totalCost = numBaseballs * costBaseball;

  cout << "Total cost of purchase: $" << totalCost << endl;
  return 0;
}
