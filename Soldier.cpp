//
// Created by Lenovo on 06.06.2022.
//

#include "Soldier.h"
#include <stdexcept>
#include <utility>

using std::move, std::invalid_argument;

Soldier::Soldier(string firstName,
                 string  lastName,
                 int age, int height, int weight,
                 string gender, string mail, string city,
                 string country, enum Rank rank, int AmountOfFights,
                 int LifeTime, string Weapon, TypeOfService typeOfService):

        Person(move(firstName), move(lastName),
               age, height, weight, move(gender),
               move(mail), move(city), move(country)),
        rank(rank),
        AmountOfFights(AmountOfFights),
        LifeTime(LifeTime),
        Weapon(move(Weapon)),
        typeOfService(typeOfService)

{
    if(AmountOfFights<0)
    {
        throw invalid_argument("Wrong amount of fights");
    }




    if(this->Weapon.empty())
        throw invalid_argument("No Weapon");

    if(LifeTime<0)
        throw invalid_argument("No Life Time");

}


string Soldier::getRank() const {
    string stringRanks[]={"First","Second","Third","Fourth",
                          "Fifth" };

    for(int i=0; i<stringRanks->size(); i++ ){

        if(AmountOfFights<0) {

            throw invalid_argument("Wrong amount of fights");
        }

    }

    return stringRanks[rank];
}
string Soldier::getTypeOfService() const {
    string stringTypeOfService[] = {"Emergency", "Spare", "Contract"};


    for (int i = 0; i < stringTypeOfService->size(); i++) {}

    return stringTypeOfService[typeOfService];
}




int Soldier::getAmountOfFights() const {
    return AmountOfFights;
}

string Soldier::getWeapon() const {
    return Weapon;
}

int Soldier::getLifeTime() const {
    return LifeTime;
}

void Soldier::NewFight() {
    if(typeOfService==Spare)
        return;

    AmountOfFights+=1;
    if(0<=AmountOfFights && AmountOfFights<=2)
        rank=First;

    if(3<=AmountOfFights && AmountOfFights<=6)
        rank=Second;

    if(7<=AmountOfFights && AmountOfFights<=12)
        rank=Third;

    if(13<=AmountOfFights && AmountOfFights<=20)
        rank=Fourth;

    if(21<=AmountOfFights)
        rank=Fifth;

}


void Soldier::GoSpare() {

    typeOfService=Spare;
}




string Soldier::Info() const
{
    string out;
    out = Person::Info() + "\nRank - " + getRank()  +
          "\nAmount Of Fights - " + to_string(AmountOfFights) +
          "\nWeapon - " + Weapon +
          "\nLife Time - " + to_string(LifeTime) + " months" +
          "\nType of service - " + getTypeOfService() + "\n";
    return out;

}
