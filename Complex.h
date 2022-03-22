#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

class Complex{

    float real_part;
    float im_part;

public:

    Complex(float r, float im);
    Complex(float r);

    float get_real();
    float get_imaginary();

    void set_real(float x);
    void set_im(float x);

    void print();

    Complex add(Complex n);

};
#endif // COMPLEX_H
