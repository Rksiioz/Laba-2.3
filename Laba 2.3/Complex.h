#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Complex {
private:
    double x;
    double y;
public:
    Complex();
    Complex(double x, double y);
    Complex(const Complex& other);


    Complex& operator=(const Complex& other);
    Complex& operator++();
    Complex operator++(int);
    Complex& operator--();
    Complex operator--(int);
    friend istream& operator>>(istream& input, Complex& complex);
    friend ostream& operator<<(ostream& output, const Complex& complex);
    operator string() const;

    void Init(double x, double y);
    bool Read();
    void Display() const;
    string toString() const;
    string ToString() const;

    Complex add(const Complex& complex);
    Complex mul(const Complex& complex);
    bool equ(const Complex& complex);

    Complex operator+(const Complex& complex);
    Complex operator*(const Complex& complex);
    bool operator==(const Complex& complex);

    double getX() const;
    double getY() const;
    void setX(const double &newX);
    void setY(const double &newY);
};




