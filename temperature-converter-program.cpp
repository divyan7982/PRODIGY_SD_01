#include <iostream>
#include <iomanip>

double celsius_to_fahrenheit(double celsius) {
    return (celsius * 9/5) + 32;
}

double celsius_to_kelvin(double celsius) {
    return celsius + 273.15;
}

double fahrenheit_to_celsius(double fahrenheit) {
    return (fahrenheit - 32) * 5/9;
}

double fahrenheit_to_kelvin(double fahrenheit) {
    return (fahrenheit - 32) * 5/9 + 273.15;
}

double kelvin_to_celsius(double kelvin) {
    return kelvin - 273.15;
}

double kelvin_to_fahrenheit(double kelvin) {
    return (kelvin - 273.15) * 9/5 + 32;
}

int main() {
    std::cout << "Temperature Converter\n";
    std::cout << "Enter the temperature value and its unit of measurement:\n";
    
    double temp_value;
    std::string original_unit;

    std::cout << "Temperature value: ";
    std::cin >> temp_value;

    std::cout << "Unit of measurement (Celsius, Fahrenheit, Kelvin): ";
    std::cin >> original_unit;

    if (original_unit == "Celsius" || original_unit == "celsius") {
        double celsius = temp_value;
        double fahrenheit = celsius_to_fahrenheit(celsius);
        double kelvin = celsius_to_kelvin(celsius);

        std::cout << std::fixed << std::setprecision(2);
        std::cout << "\n" << temp_value << " Celsius is equivalent to:\n";
        std::cout << fahrenheit << " Fahrenheit\n";
        std::cout << celsius << " Celsius\n";
        std::cout << kelvin << " Kelvin\n";
    }
    else if (original_unit == "Fahrenheit" || original_unit == "fahrenheit") {
        double fahrenheit = temp_value;
        double celsius = fahrenheit_to_celsius(fahrenheit);
        double kelvin = fahrenheit_to_kelvin(fahrenheit);

        std::cout << std::fixed << std::setprecision(2);
        std::cout << "\n" << temp_value << " Fahrenheit is equivalent to:\n";
        std::cout << fahrenheit << " Fahrenheit\n";
        std::cout << celsius << " Celsius\n";
        std::cout << kelvin << " Kelvin\n";
    }
    else if (original_unit == "Kelvin" || original_unit == "kelvin") {
        double kelvin = temp_value;
        double celsius = kelvin_to_celsius(kelvin);
        double fahrenheit = kelvin_to_fahrenheit(kelvin);

        std::cout << std::fixed << std::setprecision(2);
        std::cout << "\n" << temp_value << " Kelvin is equivalent to:\n";
        std::cout << fahrenheit << " Fahrenheit\n";
        std::cout << celsius << " Celsius\n";
        std::cout << kelvin << " Kelvin\n";
    }
    else {
        std::cout << "Invalid unit of measurement entered. Please enter Celsius, Fahrenheit, or Kelvin.\n";
    }

    return 0;
}
