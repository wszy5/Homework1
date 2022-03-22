#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

class Student{

    std::string name;
    std::string surname;
    std::string album_nr;
    std::vector<float> grades;

public:
    Student();

    Student(std::string n, std::string s, std::string an, std::vector<float> g);

    void set_name(std::string n);

    void set_surname(std::string n);

    std::string set_album_nr(std::string n);

    void summary();

    std::string get_name();

    float calculate_grade();

    bool add_grade(float grade);

    bool passed();

};


#endif // STUDENT_H
