#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include "Complex.h"


Complex::Complex(float r, float im){
    real_part = r;
    im_part = im;
}

Complex::Complex(float r){
    real_part = r;
    im_part = 0;
}

float Complex::get_real(){
    return(real_part);
}

float Complex::get_imaginary(){
    return(im_part);
}

void Complex::set_real(float x){
    real_part = x;
}

void Complex::set_im(float x){
    im_part = x;
}

void Complex::print(){
    std::cout<<real_part<<im_part<<"i";
}

Complex Complex::add(Complex n){
    real_part += n.get_real();
    im_part += n.get_imaginary();
    return(Complex(real_part,im_part));
}
