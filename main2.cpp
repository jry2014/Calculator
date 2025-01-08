#include <iostream>
#include <locale>
using namespace std;


void Calc(float nums[], int &rounds) {
    cout << "How many numbers?" << endl;
    
    while (!(cin >> rounds) || rounds < 2) {
        cout << "Invalid input. Please enter a non-negative integer greater than or equal to 2." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    
    char operation;
    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;

    for (int i = 0; i < rounds; i++) {
        cout << "Enter number " << i + 1 << ": ";
        while (!(cin >> nums[i])) {
            cout << "Invalid input. Please enter a valid number." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }

    float result = nums[0];
    for (int i = 1; i < rounds; i++) {
        switch (operation) {
            case '+':
                result += nums[i];
                break;
            case '-':
                result -= nums[i];
                break;
            case '*':
                result *= nums[i];
                break;
            case '/':
                if (nums[i] == 0) {
                    cout << "Error: Division by zero is not allowed." << endl;
                    return;
                }
                result /= nums[i];
                break;
            default:
                cout << "Invalid operation!" << endl;
                return;
        }
    }
    
    cout << "The result of the operation is: " << result << endl;
}


void Floats1(float &num1) {
    cout << "Enter amount: ";
    cin >> num1;
}

void ExchangeRate(float &usd1, float &eur1, float &sek1) {
    usd1 = 1.11;
    eur1 = 1.0;
    sek1 = 11.34;
}

void Exchange() {
    char startCurrency, targetCurrency;
    float usd1, eur1, sek1;
    float amount;

    ExchangeRate(usd1, eur1, sek1);

    cout << "Enter starting currency (u for usd, e for eur, s for sek): ";
    cin >> startCurrency;
    cout << "Enter target currency (u for usd, e for eur, s for sek): ";
    cin >> targetCurrency;
    Floats1(amount);

    float startRate, targetRate;

    switch (startCurrency) {
        case 'u':
            startRate = usd1;
            break;
        case 'e':
            startRate = eur1;
            break;
        case 's':
            startRate = sek1;
            break;
        default:
            cout << "Invalid starting currency!" << endl;
            return;
    }

    switch (targetCurrency) {
        case 'u':
            targetRate = usd1;
            break;
        case 'e':
            targetRate = eur1;
            break;
        case 's':
            targetRate = sek1;
            break;
        default:
            cout << "Invalid target currency!" << endl;
            return;
    }

    float result = amount * (targetRate / startRate);
    cout << "Converted amount: " << result << endl;
}

int main() {
    
    const int MAX_ROUNDS = 100; // Define a maximum number of inputs
    float nums[MAX_ROUNDS];
    int rounds;

    
    char choice;
    cout << "Enter 'c' for calculator or 'e' for exchange rate: ";
    cin >> choice;

    if (choice == 'e') {
        Exchange();
    } else if (choice == 'c') {
        Calc(nums, rounds);
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
