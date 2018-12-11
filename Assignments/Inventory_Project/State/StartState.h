#ifndef STARTSTATE_H_
#define STARTSTATE_H_

#include "InventoryState.h"
#include <string>

class Inventory;

// Start Concrete State 
class StartState : public InventoryState
{
    public:
        StartState();
        virtual ~StartState();

        virtual void Add(Inventory* i_obj);
        virtual void Remove(Inventory* i_obj);
};

#endif // STARTSTATE_H_