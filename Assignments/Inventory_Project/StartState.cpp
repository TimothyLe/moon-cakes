#include "StartState.h"
#include "Inventory.h"

StartState::StartState() : InventoryState(std::string("Start")) {
    // nothing
}

StartState::~StartState() {
    // nothing
}

void StartState::Add(Inventory* i_obj) {
    i_obj->handleState(Inventory::I_ADD);
}

void StartState::Remove(Inventory* i_obj) {
    i_obj->handleState(Inventory::I_REMOVE);
}