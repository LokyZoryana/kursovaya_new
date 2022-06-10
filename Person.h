//
// Created by Lenovo on 06.06.2022.
//

#ifndef UNTITLED4_PERSON_H
#define UNTITLED4_PERSON_H
#include <string>

using namespace std;

class Person {
private:
    string firstName;
    string  lastName;
    int age;
    int height;
    int weight;
    string gender;
    string mail;
    string city;
    string country;

public:

    void changeMail (const string& mail)
    {
        this->mail=mail;
    }


    Person(string firstName,
           string  lastName,
           int age,
           int height,
           int weight,
           string gender,
           string mail,
           string city,
           string country);

    virtual string Info() const;


    string getfirstName() const;
    string getlastName() const;
    int getage() const;
    int getheight() const;
    int getweight() const;
    string getgender() const;
    string getmail() const;
    string getcity() const;
    string getcountry() const;

    bool getisbigheight();
    bool getiscity();
    bool militaryAge();
    bool isAdult();
};


#endif //UNTITLED4_PERSON_H
