#include "AddState.h"
#include "Inventory.h"

AddState::AddState() : InventoryState(std::string("Add")) {
    // nothing
}

AddState::~AddState() {
    // nothing
}

void AddState::Remove(Inventory* i_obj) {
    i_obj->handleState(Inventory::I_REMOVE);
}