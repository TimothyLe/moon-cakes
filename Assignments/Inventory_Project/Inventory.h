#ifndef INVENTORY_H_
#define INVENTORY_H_

class InventoryState;

// Context 
class Inventory 
{
    public: 
        enum State {
            I_START,
            I_ADD,
            I_REMOVE,
            I_CHANGE,
            I_PREFER
        };

        Inventory();        
        virtual ~Inventory();

        void handleState(State s); // next state handler
        
        void Start();
        void Add();
        void Remove();
        void Change();
        void Prefer();

    protected:         
        InventoryState* m_pState; // current state holding concentrate objects
};

#endif // INVENTORY_H_