#include "Inventory.h"

#define MAX_ITEMS 50
#define MAX_LISTS 20

int main(void) {

    Inventory inventory;

    inventory.Add();
    inventory.Remove();
    inventory.Add();
    inventory.Change();
    inventory.Prefer();

    return 0;
}
