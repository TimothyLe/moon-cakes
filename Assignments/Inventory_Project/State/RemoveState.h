#ifndef REMOVESTATE_H_
#define REMOVESTATE_H_

#include "InventoryState.h"

class Inventory;

// Remove Concrete State 
class RemoveState : public InventoryState
{
    public:
        RemoveState();
        virtual ~RemoveState();

        virtual void Add(Inventory* i_obj); 
};

#endif // REMOVESTATE_H_