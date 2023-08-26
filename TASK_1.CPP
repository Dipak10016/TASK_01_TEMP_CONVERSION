
/*


               TASK 01.


*/

#include <iostream>
using namespace std;

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9/5) + 32;
}

double celsiusToKelvin(double celsius) {
    return celsius + 273.15;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5/9;
}

double fahrenheitToKelvin(double fahrenheit) {
    return (fahrenheit + 459.67) * 5/9;
}

double kelvinToCelsius(double kelvin) {
    return kelvin - 273.15;
}

double kelvinToFahrenheit(double kelvin) {
    return (kelvin * 9/5) - 459.67;
}

int main() {
    double temperature;
    char unit;

    cout <<"\x1b[31m"<< "Enter temperature value: "<<"\x1b[0m"<<endl;
    cin >> temperature;

    cout << "Enter unit (C, F, K): ";
    cin >> unit;

    switch (unit) {
        case 'C':
        case 'c':
        
            cout << "\x1b[32m"<<"Fahrenheit: " << celsiusToFahrenheit(temperature) << " *F" <<"\x1b[0m"<< endl;
            cout <<"\x1b[33m" <<"Kelvin: " << celsiusToKelvin(temperature) << " K" <<"\x1b[33m"<< endl;

            break;

        case 'F':
        case 'f':
            cout <<"\x1b[33m"<< "Celsius: " << fahrenheitToCelsius(temperature) << " *C" <<"\x1b[33m"<< endl;
            cout << "\x1b[32m"<<"Kelvin: " << fahrenheitToKelvin(temperature) << " K" <<"\x1b[0m"<<endl;

            break;

        case 'K':
        case 'k':
            cout << "\x1b[36m"<<"Celsius: " << kelvinToCelsius(temperature) << " *C" << "\x1b[36m"<<endl;
            cout << "\x1b[32m"<<"Fahrenheit: " << kelvinToFahrenheit(temperature) << " *F" << "\x1b[32m"<<endl;

            break;

        default:
            cout << "\x1b[31m"<<"Invalid unit entered." << "\x1b[0m"<<endl;
    }

    return 0;
}