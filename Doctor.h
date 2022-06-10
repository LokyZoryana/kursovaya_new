//
// Created by Lenovo on 06.06.2022.
//

#ifndef UNTITLED4_DOCTOR_H
#define UNTITLED4_DOCTOR_H
#include <string>
#include "Person.h"
using namespace std;

class Doctor: public Person{
    private:
        string Speciality;
        int AmountOfPatients;
        int Salary;
        string Category;
        string Degree;
        int consultation;

    public:
        string Info() const override;

        Doctor(string firstName,
               string  lastName,
               int age, int height, int weight,
               string gender, string mail, string city,
               string country, string Speciality, int AmountOfPatients,
               string Category, string Degree);

        string getSpeciality() const;
        int getAmountOfPatients() const;
        string getCategory() const;
        string getDegree() const;

        int Consultation();
        void setRating();

};


#endif //UNTITLED4_DOCTOR_H
