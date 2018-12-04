#include "RemoveState.h"
#include "Inventory.h"

RemoveState::RemoveState() : InventoryState(std::string("Remove")) {
    // nothing
}

RemoveState::~RemoveState() {
    // nothing
}

void RemoveState::Add(Inventory* i_obj) {
    i_obj->handleState(Inventory::I_ADD);
} 