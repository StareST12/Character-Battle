//
// Created by Shelby on 9/16/2024.
//

#include "Character.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//Character constructor
  inline Character::Character(string characterName, string characterRole, int hp, int atkBns, int dmgBns, int ac)
     : name(characterName), role(characterRole), hitPoints(hp), attackBonus(atkBns), damageBonus(dmgBns), armorClass(ac){}


//getters defined
    inline string Character::getName() const {
        return name;
    }

    inline string Character::getRole() const {
        return role;
    }

    inline int Character::getHitPoints() const {
        return hitPoints;
    }

    inline int Character::getAttackBonus() const {
        return attackBonus;
    }

    inline int Character::getDamageBonus() const {
        return damageBonus;
    }

    inline int Character::getArmorClass() const {
        return armorClass;
    }

    //setters defined
    inline void Character::setName(const string& newName) {
        name = newName;
    }

    inline void Character::setRole(const string& newRole) {
        role = newRole;
    }
    inline void Character::setHitPoints(int newHitPoints) {
        hitPoints = newHitPoints;
    }
    inline void Character::setAttackBonus(int newAttackBonus) {
        attackBonus = newAttackBonus;
    }
    inline void Character::setDamageBonus(int newDamageBonus) {
        damageBonus = newDamageBonus;
    }
    inline void Character::setArmorClass(int newArmorClass) {
        armorClass = newArmorClass;
    }

    //display character info
    inline void Character::displayInfo() const {
        cout << name << " the " << role << "\nHit Points: " <<
            hitPoints << "\nAttack Bonus: " << attackBonus << "\nDamage Bonus: " <<
            damageBonus << "\nArmor Class: " << armorClass << endl;
    }

    //attack method
    inline void Character::attack(Character& target) {
      cout << getName() << " attacks!" << endl;
      //random die roll (1-20)
      srand(static_cast<unsigned int>(time(nullptr)));
      int dieRoll = (rand() % 20) + 1;
      //attack roll
      int attackRoll = dieRoll + getAttackBonus();
      cout << "Attack Roll: " << dieRoll << " + " << getAttackBonus() << " --> ";
      //compare attack roll to character's armor class
      attackRoll = target.getArmorClass() - attackRoll;
      if(attackRoll > 0 ) {
          cout << "MISS!!!" << endl;
      } else {
          cout << "HIT!!!" << endl;
          damage(target);
      }
  }

  //damage method
  inline void Character::damage(Character& target) {
      //random roll (1-10)
      srand(static_cast<unsigned int>(time(nullptr)));
      int damageRoll = (rand() % 10) + 1;
      //add character's damage bonus
      int totalDamage = damageRoll + getDamageBonus();
      cout << "Total damage: " << damageRoll << " + " << getDamageBonus() << " = " << totalDamage << endl;
      target.setHitPoints(target.getHitPoints() - totalDamage);
      if(target.getHitPoints() > 0) {
          target.setHitPoints(target.getHitPoints());
      } else {
          target.setHitPoints(0);
      }
      cout << target.getName() << " has " << target.getHitPoints() << " health points left." << endl;

  }



