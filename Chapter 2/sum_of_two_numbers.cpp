/*Prompt:
Write a program that stores the integers 62 and 99 in variables and stores the
sum of these two in a variable named total. Display the total on the screen.
*/

#include <iostream>

using namespace std;

int main(){
  int numOne = 62,
      numTwo = 99,
      total;

  total = numOne + numTwo;

  cout << total << endl;

  return 0;
}
