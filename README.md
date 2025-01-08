**Calculator and Currency Converter Program**

This is a C++ program that allows users to perform either a basic 
calculator or exchange rates between three currencies: USD, EUR, and SEK.

### Features

* Calculator:
	+ Accepts up to 100 numbers as input
	+ Supports addition, subtraction, multiplication, and division operations
	+ Handles invalid inputs (e.g. non-numeric characters)
* Currency Converter:
	+ Exchanges an amount of currency between USD, EUR, and SEK at fixed 
exchange rates
	+ Displays the converted amount

### Usage

To use this program, simply compile it with your favorite C++ compiler and 
run it.

1. Run the program and select either "c" for calculator or "e" for 
currency converter.
2. If selecting calculator:
	* Enter the number of numbers you want to input (must be 2 or greater)
	* Enter each number individually
	* Select an operation (+, -, *, /) to perform on the numbers
3. If selecting currency converter:
	* Enter the starting and target currencies (u for USD, e for EUR, s for 
SEK)
	* Enter the amount of currency to exchange

### Notes

* The calculator supports up to 100 numbers as input.
* The currency converter uses fixed exchange rates and does not account 
for fluctuations in the market.
* This program is intended for simple calculations and conversions only. 
For more complex or accurate conversions, consider using a financial 
calculator or consulting with a professional.

### License

This program is provided "as-is" without any warranty or guarantee of 
correctness or functionality. You may use this program for personal or 
commercial purposes as long as you agree to hold harmless the author(s) 
and/or contributors.

## Compiling and Running

To compile this program, save it in a file called `main2.cpp` and run 
the following command:
```bash
g++ -o calc main2.cpp
```
This will create an executable file called `calc`. Run the program by 
typing:
```bash
./calc
```
and follow the prompts to select either calculator or currency converter 
mode.
