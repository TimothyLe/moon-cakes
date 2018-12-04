#include "PreferState.h"
#include "Inventory.h"

PreferState::PreferState() : InventoryState(std::string("Prefer")) {
    // nothing
}

PreferState::~PreferState() {
    // nothing
}

void PreferState::Add(Inventory* i_obj) {
    i_obj->handleState(Inventory::I_ADD);
} 

void PreferState::Remove(Inventory* i_obj) {
    i_obj->handleState(Inventory::I_REMOVE);
}

void PreferState::Prefer(Inventory* i_obj) {
    i_obj->handleState(Inventory::I_PREFER);
}  