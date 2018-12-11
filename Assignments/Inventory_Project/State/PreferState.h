#ifndef PREFERSTATE_H_
#define PREFERSTATE_H_

#include "InventoryState.h"

class Inventory;

// Prefer Concrete State 
class PreferState : public InventoryState
{
    public:
        PreferState();
        virtual ~PreferState();

        virtual void Add(Inventory* i_obj);
        virtual void Remove(Inventory* i_obj);
        virtual void Change(Inventory* i_obj); 
};

#endif // PREFERSTATE_H_