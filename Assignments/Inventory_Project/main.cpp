#include "Inventory.h"
#include <iostream>

int main(int argc, char ** argv) {
    // std::cout << "Hello\n";
    Inventory inventory;

    std::cout << "You inserted " << argc << " states:\n";

    for(int i = 0; i < argc; i++) {
        std::cout << argv[i] << "\n";        
    }

    inventory.Add();
    inventory.Remove();
    inventory.Add();
    inventory.Change();
    inventory.Prefer();

    return 0;
}
