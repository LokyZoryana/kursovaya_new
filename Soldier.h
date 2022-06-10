//
// Created by Lenovo on 06.06.2022.
//

#ifndef UNTITLED4_SOLDIER_H
#define UNTITLED4_SOLDIER_H
#include <string>
#include "Person.h"
using namespace std;

enum Rank
{
    First,
    Second,
    Third,
    Fourth,
    Fifth
};

enum TypeOfService
{
    Emergency,
    Spare,
    Contract
};


class Soldier:public Person{

private:
    Rank rank;
    TypeOfService typeOfService;
    string Weapon;
    int LifeTime;
    int AmountOfFights;



public:


    Soldier(string firstName,
    string  lastName,
    int age, int height, int weight,
            string gender, string mail, string city,
    string country, Rank rank, int AmountOfFights,
            int LifeTime, string Weapon, TypeOfService typeOfService);


    string getRank() const;
    string getTypeOfService() const;
    int getAmountOfFights() const;
    string getWeapon() const;
    int getLifeTime() const;



    void NewFight();
    void GoSpare();


    string Info() const override;

};


#endif //UNTITLED4_SOLDIER_H
