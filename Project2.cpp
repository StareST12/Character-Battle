//
// Created by Shelby on 9/16/2024.
//

#include <iostream>
#include "Character.h"
#include "Character.cpp"
using namespace std;

int main() {
    //variables for character constructor
    string name;
    string role;
    int hitPoints;
    int attackBonus;
    int damageBonus;
    int armorClass;


    //First character input
    cout << "First character's name? " << endl;
    cin >> name;
    cout << "character's role? " << endl;
    cin >> role;
    cout << name << " the " << role << "'s hit points? " << endl;
    cin >> hitPoints;
    cout << name << " the " << role << "'s attack bonus? " << endl;
    cin >> attackBonus;
    cout << name << " the " << role << "'s damage bonus? " << endl;
    cin >> damageBonus;
    cout << name << " the " << role << "'s armor class? " << endl;
    cin >> armorClass;
    Character c1(name, role, hitPoints, attackBonus, damageBonus, armorClass);
    c1.displayInfo();

    //second character input
    cout << "Second character's name? " << endl;
    cin >> name;
    cout << "character's role? " << endl;
    cin >> role;
    cout << name << " the " << role << "'s hit points? " << endl;
    cin >> hitPoints;
    cout << name << " the " << role << "'s attack bonus? " << endl;
    cin >> attackBonus;
    cout << name << " the " << role << "'s damage bonus? " << endl;
    cin >> damageBonus;
    cout << name << " the " << role << "'s armor class? " << endl;
    cin >> armorClass;
    Character c2(name, role, hitPoints, attackBonus, damageBonus, armorClass);

    c2.displayInfo();

    //while loop for attack rolls
    while(c1.getHitPoints() > 0 && c2.getHitPoints() > 0) {
        c1.attack(c2);
        c2.attack(c1);
        if(c1.getHitPoints() == 0) {
            cout << c2.getName() << " wins!" << endl;
            exit(0);
        } else if(c2.getHitPoints() == 0) {
            cout << c1.getName() << " wins!" << endl;
            exit(0);
        } else {
            continue;
        }
    }
    return 0;
}
