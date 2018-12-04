#ifndef CHANGESTATE_H_
#define CHANGESTATE_H_

#include "InventoryState.h"

class Inventory;

// Change Concrete State 
class ChangeState : public InventoryState
{
    public:
        ChangeState();
        virtual ~ChangeState();

        virtual void Add(Inventory* i_obj); 
        virtual void Remove(Inventory* i_obj);
        virtual void Prefer(Inventory* i_obj);  
};

#endif // CHANGESTATE_H_