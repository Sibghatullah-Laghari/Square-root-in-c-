/*
 * sqrt_calculator.cpp
 * Computes the square root of a non‑negative number using built‑in sqrt().
 * Last updated: 2026-07-18
 *
 * Limitations:
 *   - Works only for real numbers (discards imaginary results).
 *   - Precision depends on the floating‑point type (float used here).
 *
 * Possible improvements:
 *   - Use double for higher precision.
 *   - Implement Newton‑Raphson method for educational purposes.
 */

#include <iostream>
#include <cmath>
using namespace std;

int main() {

    float number;          // input number
    float result;          // square root result

    cout << "Enter a positive number to compute its square root: ";
    cin >> number;

    // Check for negative input
    if (number < 0) {
        cout << "Error: Square root of a negative number is imaginary." << endl;
        return 1;
    }

    // Compute square root using built‑in function
    result = sqrt(number);

    // Display the result
    cout << "The square root of " << number << " is: " << result << endl;

    return 0;
}
