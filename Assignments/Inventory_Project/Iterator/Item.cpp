#include "Item.h"
#include <iostream>

Item::Item(std::string n, int num) {
    itemName = n;
    itemNumber = num;
}

Item::~Item() {
    delete itemName;
    delete itemNumber;
}

std::string Item::getItemName() {
    if(itemInList) 
        return itemName;
    return "Item was not in a list\n";
}

int Item::getItemNumber() {
    if(itemInList) 
        return itemNumber;
    return "Item was not in a list\n";
}

void Item::setItemName(std::string n) {
    if(itemInList) {
        itemName = n;
        std::cout << "Item name set\n";
    }        
    return "Item was not in a list\n";
}

void Item::setItemNumber(int num) {
    if(itemInList) {
        itemNumber = num;
        std::cout << "Item number set\n";
    }        
    return "Item was not in a list\n";
}

bool Item::itemInList() {
    return itemName && itemNumber;
}
