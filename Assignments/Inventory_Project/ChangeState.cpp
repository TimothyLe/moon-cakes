#include "ChangeState.h"
#include "Inventory.h"

ChangeState::ChangeState() : InventoryState(std::string("Change")) {
    // nothing
}

ChangeState::~ChangeState() {
    // nothing
}

void ChangeState::Add(Inventory* i_obj) {
    i_obj->handleState(Inventory::I_ADD);
} 

void ChangeState::Remove(Inventory* i_obj) {
    i_obj->handleState(Inventory::I_REMOVE);
}

void ChangeState::Prefer(Inventory* i_obj) {
    i_obj->handleState(Inventory::I_PREFER);
}  