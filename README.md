# TASK_01_TEMP_CONVERSION ✨

## Description 🔢
This program is a simple temperature conversion tool written in C++. It converts a temperature from one unit to another (Celsius, Fahrenheit, or Kelvin). The user can input a temperature value along with the source and target units to get the converted value.

## Features ⚛️
- Convert temperatures between:
  - Celsius (°C) 🌡️
  - Fahrenheit (°F) ❄️
  - Kelvin (K) 🌐
- User-friendly prompts to input data 😊
- Accurate temperature conversion formulas ✅

## How to Use 🔧
1. **Clone the repository** to your local machine:
   ```bash
   git clone <repository-url>
   ```
2. **Navigate to the directory** containing the program:
   ```bash
   cd TASK_01_TEMP_CONVERSION
   ```
3. **Compile the program** using a C++ compiler. For example:
   ```bash
   g++ -o temp_conversion TASK_1.CPP
   ```
4. **Run the program**:
   ```bash
   ./temp_conversion
   ```
5. **Follow the on-screen instructions** to input the temperature, source unit, and target unit.

## Conversion Formulas 🔢
- **Celsius to Fahrenheit**: `F = (C * 9/5) + 32` ⭐
- **Celsius to Kelvin**: `K = C + 273.15` 🌡️
- **Fahrenheit to Celsius**: `C = (F - 32) * 5/9` ❄️
- **Fahrenheit to Kelvin**: `K = (F - 32) * 5/9 + 273.15` 🌐
- **Kelvin to Celsius**: `C = K - 273.15` ⚛️
- **Kelvin to Fahrenheit**: `F = (K - 273.15) * 9/5 + 32` ⭐

## Sample Output 📊
```
Enter temperature value: 100
Enter source unit (C/F/K): C
Enter target unit (C/F/K): F
The converted temperature is: 212.00 °F
```

## File Structure 🗂
- `TASK_1.CPP`: The main C++ program file containing the implementation of temperature conversion.

## Requirements 🔧
- A C++ compiler (e.g., GCC, Clang, or MSVC)



