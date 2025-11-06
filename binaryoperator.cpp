#include <iostream>
using namespace std;
class Complex {
private:
    float real;
    float imag;

public:
    Complex(float r = 0, float i = 0) {
        real = r;
        imag = i;
    }
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
    Complex operator+(const Complex &c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
};

int main() {
    Complex c1(3, 4), c2(5, 6);
    cout << "First complex number: ";
    c1.display();
    cout << "Second complex number: ";
    c2.display();
    Complex c3 = c1 + c2;
    cout << "Sum of complex numbers: ";
    c3.display();
    return 0;
}