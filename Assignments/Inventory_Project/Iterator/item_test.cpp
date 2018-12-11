#include "Item.h"

int main() {
    Item a("Avocado", 0);
    Item b("Beans", 1);
    Item c("Carrot", 2);

    std::string aName;
    int bNum, cNum;    

    a.getItemName();
    b.getItemNumber();
    c.getItemNumber();

    a.setItemNumber(bNum);
    b.setItemNumber(a.getItemNumber());
    c.setItemName(aName);

    std::cout << "A Name: " << aName << 
                 "\nB Number: " << bNum << 
                 "\nC Number: " << cNum << std::endl;
                 
    return 0;
}