// Program that returns the roots of a quadratic equation given the constant
// coefficients a, b, and c.

#include <cmath>
#include <complex>
#include <iostream>

using namespace std;

int main() {

    using complex_number = complex<double>;

    auto a = complex_number{0, 0};
    auto b = complex_number{0, 0};
    auto c = complex_number{0, 0};

    char response; // For user input to decide whether want to quite or continue the program

    while (1) {

        cout << "Enter the coefficients, a, b, and c: " << endl;
        cin >> a >> b >> c;

        // Calculating roots with the quadratic formula
        auto discriminant = pow(b, 2) - (complex_number)4 * a * c;

        auto root_1 = (-b + sqrt(discriminant)) / ((complex_number)2 * a);

        auto root_2 = (-b - sqrt(discriminant)) / ((complex_number)2 * a);

        if (discriminant.real() >= 0) {
            cout << "Root 1: " << root_1.real() << endl;
            cout << "Root 2: " << root_2.real() << endl;
        } else {
            cout << "Root 1: " << root_1.real() << " + " << root_1.imag() << "j"
                 << endl;
            cout << "Root 2: " << root_2.real() << " - " << abs(root_2.imag())
                 << "j" << endl;
        }

        cout << "Do you wish to do another calculation? Press 'q' to quit or any other key to continue. " << endl;
        cin >> response;

        if (response == 'q') break; else continue;
    }
}