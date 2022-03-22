#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include "Student.h"



Student::Student(){}

    Student::Student(std::string n, std::string s,std::string an, std::vector<float> g){
        name = n;
        surname = s;
        album_nr = an;
        grades = g;
    }

    void Student::set_name(std::string n){ //setter
        name = n;
    }

    void Student::set_surname(std::string n){ //setter
        surname = n;
    }

    std::string Student::set_album_nr(std::string n){ //setter
        if((n.length()==5 || n.length()==6)){
            for(unsigned int i=0;i<n.length();i++){
                if(!isdigit(n[i])){
                    return "Invalid data!";
                }
            }
            album_nr = n;
            return "Album nr has been added!";
        }
        return "Invalid data!";

    }

    void Student::summary(){
        std::cout<<"Name: "<<name<<"\n";
        std::cout<<"Surname: "<<surname<<"\n";
        std::cout<<"Album numer: "<<album_nr<<"\n";
        std::cout<<"Grades: ";
        for(auto &val : grades){
            std::cout<<val<<" ";
        }
    }

    std::string Student::get_name(){ //getter
        return name;
    }

    float Student::calculate_grade(){
        std::cout << "calculating grade for " << name << std::endl;
        float sum = std::accumulate(grades.begin(), grades.end(), 0.0f);
        return sum/ grades.size();
    }

    bool Student::add_grade(float grade){
        if(grade >= 2.0 && grade <= 5.0){
            grades.push_back(grade);
            return true;
        }
        return false;
    }

    bool Student::passed(){
        int count_2 = std::count_if(grades.begin(), grades.end(), [](int i){return i == 2.0;});
        return count_2<=1;
    }
