#include "Item.h"

Item::Item(std::string name,
         std::string category, 
         int num) :
         itemName(name),
         itemCategory(category),
         itemNumber(num) {

}

Item::Item() : itemNumber(0) {

}

Item::~Item() {

}

std::ostream& operator<<(std::ostream& outc, const Item & item) {
    std::string tabsFollowCat  = (item.getItemCategory().size() >= 16) ? std::string("\t") : std::string("\t\t");
    std::string tabsFollowName = (item.getItemName().size() >= 16) ? std::string("\t") : std::string("\t\t");
    outc << item.getItemCategory() << tabsFollowCat
         << item.getItemName() << tabsFollowName
         << item.getItemNumber();
    return outc;
}