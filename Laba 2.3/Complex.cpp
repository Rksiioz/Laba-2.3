#include "Complex.h"

Complex::Complex() : x(0), y(0) {}

Complex::Complex(double x, double y) : x(x), y(y) {}

Complex::Complex(const Complex& other) : x(other.x), y(other.y) {}

Complex& Complex::operator=(const Complex& other) {
    if (this != &other) {
        x = other.x;
        y = other.y;
    }
    return *this;
}

Complex& Complex::operator++() {
    ++x;
    return *this;
}

Complex Complex::operator++(int) {
    Complex temp(*this);
    ++x;
    return temp;
}

Complex& Complex::operator--() {
    --y;
    return *this;
}

Complex Complex::operator--(int) {
    Complex temp(*this);
    --y;
    return temp;
}

istream& operator>>(istream& input, Complex& complex) {
    input >> complex.x;
    return input;
}

ostream& operator<<(ostream& output, const Complex& complex) {
    output << complex.x;
    return output;
}

string Complex::toString() const {
    return to_string(x) + " + " + to_string(y) + 'i';
}

string Complex::ToString() const {
    string result;

    result += "X: " + to_string(this->x) + '\n';
    result += "Y: " + to_string(this->y) + '\n';

    return result;
}

void Complex::Init(double x, double y) {
    this->x = x;
    this->y = y;
}

bool Complex::Read() {
    cout << "Enter x: "; cin >> x;
    cout << "Enter y: "; cin >> y;

    if(cin.fail()) {
        cout << endl << "Entered values are not valid!" << endl;
        cin.clear();
        return false;
    }

    return true;
}

void Complex::Display() const {
    cout << this->toString() << endl;
}

Complex Complex::add(const Complex& complex) {
    return Complex(x + complex.x, y + complex.y);
}

Complex Complex::mul(const Complex& complex) {
    return Complex(x * complex.x - y * complex.y, x * complex.y + complex.x * y);
}

bool Complex::equ(const Complex& complex) {
    return x == complex.x && y == complex.y;
}

Complex Complex::operator+(const Complex& complex) {
    return add(complex);
}

Complex Complex::operator*(const Complex& complex) {
    return mul(complex);
}

bool Complex::operator==(const Complex& complex) {
    return equ(complex);
}

double Complex::getX() const {
    return x;
}

double Complex::getY() const {
    return y;
}

void Complex::setX(const double &newX) {
    x = newX;
}

void Complex::setY(const double &newY) {
    y = newY;
}

Complex::operator string() const {
    return toString();
}