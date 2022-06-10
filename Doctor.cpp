//
// Created by Lenovo on 06.06.2022.
//

#include "Doctor.h"
#include <stdexcept>


Doctor::Doctor(string firstName,
               string  lastName,
               int age, int height, int weight,
               string gender,    string mail, string city,
               string country, string Speciality, int AmountOfPatients,
               string Category, string Degree):

        Person(firstName, lastName, age, height, weight, gender, mail, city, country),
        Speciality(Speciality),
        AmountOfPatients(AmountOfPatients),
        Category(Category),
        Degree(Degree)
{if (AmountOfPatients<0)
    {
        throw invalid_argument("Number doesn't exist");
    }

}


string Doctor::getSpeciality() const {
    return Speciality;
}

int Doctor::getAmountOfPatients() const {
    return AmountOfPatients;
}

string Doctor::getCategory() const {
    return Category;
}

string Doctor::getDegree() const {
    return Degree;
}



void Doctor::setRating(){
    AmountOfPatients+=1;
}




string Doctor::Info() const
{
    string out;
    out = Person::Info() + "\nSpeciality - " + Speciality +
          "\nAmount Of Patients - " + to_string(AmountOfPatients) +
          "\nCategory - " + Category +
          "\nDegree - " + Degree;
    return out;

}


 int Doctor::Consultation()
{
    if (Degree=="Second"&&(Category=="Surgeon"||Category=="Ophthalmologist"||Category=="Gynecologist"))
    {
        consultation=200;
        setRating();
    }

    else if (Degree=="First"&&(Category=="Surgeon"||Category=="Ophthalmologist"||Category=="Gynecologist"))
    {
        consultation=300;
        setRating();
    }

    else if (Degree=="Highest"&&(Category=="Surgeon"||Category=="Ophthalmologist"||Category=="Gynecologist"))
    {
        consultation=500;
        setRating();
    }
    return consultation;
}



