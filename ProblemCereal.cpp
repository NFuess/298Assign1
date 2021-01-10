/*
*Nick Fuess
*2341608
*Assignment #1
*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  const double TON_TO_OUNCES_CONVERSION_FACTOR = 35273.92;
  double boxWeightInOz;

  cout << "Enter the weight of the cereal box in ounces: " << endl;
  cin >> boxWeightInOz;

  cout << "The converted weight of this cereal box is " << boxWeightInOz / TON_TO_OUNCES_CONVERSION_FACTOR << " tons." << endl;
  cout << TON_TO_OUNCES_CONVERSION_FACTOR / boxWeightInOz << " boxes of this cereal is required to yield one metric ton." << endl;

  return 0;
}
