#include "converter.hpp"
#include <iostream>

using namespace std;

double inchesToCentimeters(double inches) {
    // TODO: return inches converted to centimeters.
    return inches * 2.54;
}

double centimetersToInches(double centimeters) {
    // TODO: return centimeters converted to inches.
    return centimeters / 2.54;
}

double poundsToKilograms(double pounds) {
    // TODO: return pounds converted to kilograms.
    return pounds * 0.453592;
}

double kilogramsToPounds(double kilograms) {
    // TODO: return kilograms converted to pounds.
    return kilograms / 0.453592;
}

double fahrenheitToCelsius(double fahrenheit) {
    // TODO: return Fahrenheit converted to Celsius.
    return (fahrenheit - 32) * 5.0 / 9.0;
}

double celsiusToFahrenheit(double celsius) {
    // TODO: return Celsius converted to Fahrenheit.
    return (celsius * 9.0 / 5.0) + 32;
}

bool isValidMenuChoice(int choice) {
    // TODO: return true when choice is between EXIT_CHOICE and CELSIUS_TO_FAHRENHEIT.
    return choice >= 0 && choice <= 6;
}

bool requiresNonNegativeValue(int choice) {
    // Length and weight conversions cannot use negative values.
    // Temperature conversions may use negative values.
    // TODO: return true for choices 1 through 4.
    return choice >= 1 && choice <= 4;
}

bool isValidValueForChoice(int choice, double value) {
    if (!isValidMenuChoice(choice)) {
        return false;
    }
    
    if (requiresNonNegativeValue(choice)) {
        return value >= 0;
    }
    
    return true;
}

void printMenu() {
    cout << "\nUnit Converter\n\n";
    cout << "1. Inches to centimeters\n";
    cout << "2. Centimeters to inches\n";
    cout << "3. Pounds to kilograms\n";
    cout << "4. Kilograms to pounds\n";
    cout << "5. Fahrenheit to Celsius\n";
    cout << "6. Celsius to Fahrenheit\n";
    cout << "0. Exit\n\n";
    cout << "Enter choice: ";
}
