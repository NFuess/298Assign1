/*
This program prompts the user for the weight of a given cereal box in ounces, converting and outputing the equivalent weight
in metric tons. The program also calculates and ouputs how many cereal boxes of the given weight would be needed to have a
combined weight equivalent to a single metric ton.
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
