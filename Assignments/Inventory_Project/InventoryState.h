#ifndef INVENTORYSTATE_H_
#define INVENTORYSTATE_H_

#include <string>

class Inventory;

// Base State
class InventoryState 
{
    public:
        InventoryState(std::string aName);
        virtual ~InventoryState();
        virtual void Start(Inventory* i_obj);
        virtual void Add(Inventory* i_obj);
        virtual void Remove(Inventory* i_obj);
        virtual void Change(Inventory* i_obj);
        virtual void Prefer(Inventory* i_obj);

        std::string StateName() { return inventoryName; }
    private:
        std::string inventoryName;
};

#endif // INVENTORYSTATE_H_