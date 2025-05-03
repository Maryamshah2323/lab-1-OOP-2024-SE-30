#include <iostream>
#include"temperature.h"
using namespace std;


int main() {
    Temperature temp;
   // Input temperature in Celsius
    cout << "Enter temperature in Celsius: ";
    cin >> temp.celsius;
    // Display the converted value
    temp.displayFahrenheit();
    return 0;
}
