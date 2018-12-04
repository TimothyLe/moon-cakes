#ifndef ADDSTATE_H_
#define ADDSTATE_H_

#include "InventoryState.h"

class Inventory;

// Add Concrete State 
class AddState : public InventoryState
{
    public:
        AddState();
        virtual ~AddState();

        virtual void Remove(Inventory* i_obj);        
};

#endif // ADDSTATE_H_