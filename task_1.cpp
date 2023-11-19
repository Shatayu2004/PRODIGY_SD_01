#include <iostream>

using namespace std;

int main() {
    // Prompt user for temperature and unit
    cout << "Enter temperature value: ";
    double temperature;
    cin >> temperature;

    cout << "Enter unit of measurement (Celsius, Fahrenheit, or Kelvin): ";
    string unit;
    cin >> unit;

    // Convert temperature to Fahrenheit and Kelvin
    double convertedToFahrenheit, convertedToKelvin;

    if (unit == "Celsius") {
        convertedToFahrenheit = (temperature * 9/5) + 32;
        convertedToKelvin = temperature + 273.15;
    } else if (unit == "Fahrenheit") {
        convertedToFahrenheit = temperature;
        convertedToKelvin = (temperature - 32) * 5/9 + 273.15;
    } else if (unit == "Kelvin") {
        convertedToFahrenheit = (temperature - 273.15) * 9/5 + 32;
        convertedToKelvin = temperature;
    } else {
        cout << "Invalid unit of measurement. Please enter Celsius, Fahrenheit, or Kelvin." << endl;
        return 1; // Exit program with an error code
    }

    // Display converted values
    cout << "Converted to Fahrenheit: " << convertedToFahrenheit << " F" << endl;
    cout << "Converted to Kelvin: " << convertedToKelvin << " K" << endl;

    return 0;
}