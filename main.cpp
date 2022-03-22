#include <iostream>
#include "Student.h"
#include "Complex.h"

using namespace std;


int main()
{

    Student student3;

    student3.set_name("Alex");
    std::cout << "student name is " << student3.get_name() << std::endl;
    Student student2{"iman", "es","123456", {0.0,1.1}};
    student3.add_grade(4.5);
    student3.add_grade(3.5);


    float ave = student3.calculate_grade();

    std::cout << "ave grade is " << ave << std::endl;

    Student s1;
    s1.set_name("Wiktor");
    s1.set_surname("Szymanski");
    s1.set_album_nr("123456");
    s1.add_grade(3);
    s1.add_grade(4);
    s1.add_grade(5);
    s1.add_grade(2);
//    s1.add_grade(2);
    s1.add_grade(3.5);
    s1.summary();
    std::cout<<"\nPassed(1), fail(0): "<<s1.passed()<<"\n";
    std::cout<<s1.calculate_grade()<<"\n";

    Complex a(1.0, -2.0); // creates 1-2i
    Complex b(3.14); // creates 3.14

    b.set_im(-5);

    Complex c = a.add(b);

    c.print(); // prints 4.14-7i
    return 0;
}
