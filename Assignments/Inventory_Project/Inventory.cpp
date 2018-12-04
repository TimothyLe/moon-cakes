#include "Inventory.h"
#include "StartState.h"
#include "AddState.h"
#include "RemoveState.h"
#include "ChangeState.h"
#include "PreferState.h"
#include <iostream>

Inventory::Inventory() : m_pState(new StartState()) {
    // nothing
}

Inventory::~Inventory() {
    delete m_pState;
}

void Inventory::Start() {
    m_pState->Start(this);
    std::cout << "Current state: Starting\n";
}

void Inventory::Add() {
    m_pState->Add(this);
    std::cout << "Current state: Add\n";
}

void Inventory::Remove() {
    m_pState->Remove(this);
    std::cout << "Current state: Remove\n";
}

void Inventory::Change() {
    m_pState->Change(this);
    std::cout << "Current state: Change\n";
}

void Inventory::Prefer() {
    m_pState->Prefer(this);
    std::cout << "Current state: Prefer\n";
}

// State Handler
void Inventory::handleState(State s) {
    std::cout << "You were in " << m_pState->StateName() << " mode.\n";
    delete m_pState;

    if(s==I_START)
        m_pState = new StartState();     
    else if(s==I_ADD)
        m_pState = new AddState();     
    else if(s==I_REMOVE)
        m_pState = new RemoveState();    
    else if(s==I_CHANGE)
        m_pState = new ChangeState();    
    else 
        m_pState = new PreferState();

    std::cout << "You are now in " << m_pState->StateName() << " mode.\n";
}
