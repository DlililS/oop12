#pragma once
#ifndef HEADER_H
#define HEADER_H
#include <iostream>
#include <math.h>
using namespace std;

class Complex
{
    double im = 0;
    double re = 0;
public:
    Complex(double re = 0, double im = 0) : re(re), im(im) {}
    bool compareTo(Complex n);
    double modul() const {
        return sqrt(im * im + re * re);
    }
    friend ostream& operator <<(ostream& c, const Complex& rv);
    bool operator <(const Complex& rv) const {
        return this->modul() < rv.modul();
    }

};
ostream& operator <<(ostream& c, const Complex& rv) {
    return c << rv.re << "+" << rv.im;
}

template<typename Type>
void Sort(Type arr[], int n)
{
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                swap(arr[j + 1], arr[j]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

#endif
