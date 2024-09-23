//
// Created by Shelby on 9/16/2024.
//

#ifndef CHARACTER_H
#define CHARACTER_H
#include <iostream>
using namespace std;



class Character {
    private:
      string name;
      string role;
      int hitPoints;
      int attackBonus;
      int damageBonus;
      int armorClass;


    public:
      //constructor
      Character(string name, string role, int hitPoints, int attackBonus, int damageBonus, int armorClass);

      //getters
      string getName() const;
      string getRole() const;
      int getHitPoints() const;
      int getAttackBonus() const;
      int getDamageBonus() const;
      int getArmorClass() const;

      //setters

      void setName(const string& newName);
      void setRole(const string& newRole);
      void setHitPoints(int hitPoints);
      void setAttackBonus(int attackBonus);
      void setDamageBonus(int damageBonus);
      void setArmorClass(int newArmorClass);

      //display info
      void displayInfo() const;

      //attack
      void attack(Character& target);
      //damage
      void damage(Character& target);
};



#endif //CHARACTER_H
