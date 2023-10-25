#include <iostream>

using namespace std; // Use the std namespace

class ComplexNumber {
private:
    double real;
    double imag;

public:
    // Constructor to initialize the complex number
    ComplexNumber(double r, double i) {
    real = r;
    imag = i;
}


    // Function to add two complex numbers
    ComplexNumber add(const ComplexNumber& other) {
        double resultReal = real + other.real;
        double resultImag = imag + other.imag;
        return ComplexNumber(resultReal, resultImag);
    }

    // Function to display the complex number
    void display() {
        cout << "Complex Number: " << real << " + " << imag << "i" << endl;
    }
};

int main() {
    
    double realPart1, imagPart1, realPart2, imagPart2;

    // Input for the first complex number
    cout << "Enter the real part of the first complex number: ";
    cin >> realPart1;
    cout << "Enter the imaginary part of the first complex number: ";
    cin >> imagPart1;

    // Input for the second complex number
    cout << "Enter the real part of the second complex number: ";
    cin >> realPart2;
    cout << "Enter the imaginary part of the second complex number: ";
    cin >> imagPart2;

    // Create two ComplexNumber objects based on user input
    ComplexNumber num1(realPart1, imagPart1);
    ComplexNumber num2(realPart2, imagPart2);

    // Display the original complex numbers
    cout << "\nOriginal Complex Numbers:" << endl;
    num1.display();
    num2.display();

    // Add the complex numbers using the add function
    ComplexNumber sum = num1.add(num2);

    // Display the result of addition
    cout << "\nResult of Addition:" << endl;
    sum.display();

    return 0;
}
