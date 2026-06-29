#include "converter.hpp"
#include <iostream>

using namespace std;

int main() {
    int choice = -1;
    double value = 0.0;
    double result = 0.0;

    do {
        cout << "\nUnit Converter/n/n";
        cout << "1. Inches to centimeters\n";
        cout << "2. Centimeters to inches\n";
        cout << "3. Pounds to kilograms\n";
        cout << "4. Kilograms to pounds\n";
        cout << "5. Fahrenheit to Celsius\n";
        cout << "6. Celsius to Fahrenheit\n";
        cout << "0. Exit\n\n";

        cout << "Enter choice: ";
        cin >> choice;

        while (choice < 0 || choice > 6) {
            cout << "Invalid choice. Enter choice: ";
            cin >> choice;
        }
        if (choice == 0) {
            cout << "Goodbye!\n";
            break;
        }
        cout << "Enter value: ";
        cin >> value;
        while ((choice >= 1 && choice <= 4) && value < 0) {
            cout << "Invalid value. Enter value: ";
            cin >> value;
        }
        
         switch (choice) {
            case 1:
                cout << value << " inches = "
                     << inchesToCentimeters(value) << " centimeters\n";
                break;
            case 2:
                cout << value << " centimeters = "
                     << centimetersToInches(value) << " inches\n";
                break;
            case 3:
                cout << value << " pounds = "
                     << poundsToKilograms(value) << " kilograms\n";
                break;
            case 4:
                cout << value << " kilograms = "
                     << kilogramsToPounds(value) << " pounds\n";
                break;
            case 5:
                cout << value << " Fahrenheit = "
                     << fahrenheitToCelsius(value) << " Celsius\n";
                break;
            case 6:
                cout << value << " Celsius = "
                     << celsiusToFahrenheit(value) << " Fahrenheit\n";
                break;
        }
    } while (choice != 0);
    return 0;
}
