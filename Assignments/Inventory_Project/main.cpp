#include "State/Inventory.h"
// #include "Iterator/ArrayList.h"
// #include "Iterator/Iterator.h"
// #include "Iterator/Item.h"
// #include "Iterator/VectorList.h"

#include <iostream>
#include <string>
const unsigned int MAXSTRINGSIZE = 50;

// void PrintMenu(int n, Inventory i);

// List<Item> * MakeDrinksList() {
//     List<Item> * drinksList = new VectorList<Item>();

//     drinksList->addItem(Item(std::string("Sprite"),  std::string("Fruit"), 1234));
//     drinksList->addItem(Item(std::string("Coke"),    std::string("Cola"), 1235));
//     drinksList->addItem(Item(std::string("Fanta"),   std::string("Fruit"), 1236));
//     drinksList->addItem(Item(std::string("A&W"),     std::string("RB"), 1237));

//     return drinksList;
// }

// List<Item> * MakeSnacksList() {
//     List<Item> * snacksList = new ArrayList<Item>();

//     snacksList->addItem(Item(std::string("Cheetos"),    std::string("Chips"), 1334));
//     snacksList->addItem(Item(std::string("Cupcake"),    std::string("Bakery"), 1335));
//     snacksList->addItem(Item(std::string("Twinkies"),   std::string("Bakery"), 1336));
//     snacksList->addItem(Item(std::string("Nuggets"),    std::string("Freezer"), 1337));

//     return snacksList;
// }

// void PrintList(std::string lineName, Iterator<Item> * iterator) {
//     std::cout << lineName << "\n";
//     unsigned int linePosition = 1;
//     for(iterator->first(); !iterator->isDone(); iterator->next()) {
//         std::cout << linePosition++ << ". " << iterator->currentItem() << "\n";
//     }
//     std::cout << "\n";
// }

int main(int argc, char ** argv) {
    // Command Line Argument Component
    std::string list[MAXSTRINGSIZE];
    std::cout << "You entered " << argc - 1 << " lists:\n";
    for(int i = 1; i < argc; i++) {
        std::cout << i << ". " << argv[i] << "\n";
        list[i-1] = argv[i];
    }

    int option = 0;
    Inventory inventory;

    // State Component
    do {
        std::cout << "Select an option:\n"
              << "0. Start\n"
              << "1. Add\n"
              << "2. Remove\n"
              << "3. Change\n"
              << "4. Prefer\n"
              << "Enter 10 to quit\n";
        std::cin >> option;
        switch(option) {
            case 0: inventory.Start(); break;
            case 1: inventory.Add(); break;
            case 2: inventory.Remove(); break;
            case 3: inventory.Change(); break;
            case 4: inventory.Prefer(); break;
            default: std::cout << "Not a valid entry\n";
        }          
    } while(option!=10);

    // // Iterator Component
    // List<Item> * drinksList = MakeDrinksList();
    // Iterator<Item> * drinksListIterator = drinksList->createIterator();
    // PrintList(std::string("Drinks"), drinksListIterator);
    // delete drinksListIterator;
    // delete drinksList;

    // List<Item> * snacksList = MakeSnacksList();
    // Iterator<Item> * snacksListIterator = snacksList->createIterator();
    // PrintList(std::string("Snacks"), snacksListIterator);
    // delete snacksListIterator;
    // delete snacksList;

    return 0;
}

// void PrintMenu(int n, Inventory i) {
//     std::cout << "Select an option:\n"
//               << "0. Start\n"
//               << "1. Add\n"
//               << "2. Remove\n"
//               << "3. Change\n"
//               << "4. Prefer\n"
//               << "Enter 10 to quit\n";
//     switch(n) {
//         case 0: i.Start(); break;
//         case 1: i.Add(); break;
//         case 2: i.Remove(); break;
//         case 3: i.Change(); break;
//         case 4: i.Prefer(); break;
//         default: std::cout << "Not a valid entry\n";
//     }              
// }