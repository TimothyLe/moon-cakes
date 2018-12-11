#include "InventoryState.h"
#include <iostream>

InventoryState::InventoryState(std::string aName) : inventoryName(aName) {
    // nothing
}

InventoryState::~InventoryState() {
    // nothing
}

void InventoryState::Start(Inventory* i_obj){
    std::cout << "Cannot transition from " << StateName() << " to Start\n";
}

void InventoryState::Add(Inventory* i_obj){
    std::cout << "Cannot transition from " << StateName() << " to Add\n";
}

void InventoryState::Remove(Inventory* i_obj){
    std::cout << "Cannot transition from " << StateName() << " to Remove\n";
}

void InventoryState::Change(Inventory* i_obj){
    std::cout << "Cannot transition from " << StateName() << " to Change\n";
}

void InventoryState::Prefer(Inventory* i_obj){
    std::cout << "Cannot transition from " << StateName() << " to Prefer\n";
}