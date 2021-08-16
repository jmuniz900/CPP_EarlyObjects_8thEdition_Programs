#include <iostream>
using namespace std;

int main(){
  double hours, rate, pay;

  //Get number of hours worked
  cout << "How many hours did you work?\n";
  cin >> hours;

  //Get hourly pay rate
  cout << "How much do you get paid per hour?\n";
  cin >> rate;

  //Calculate pay
  pay = hours * rate;

  //Display the pay.
  cout << "You have earned $" << pay << " before taxes" << endl;
  return 0;
}
