#ifndef ITEMITERATOR_H_
#define ITEMITERATOR_H_

#include <string>
#include <iostream>

// Aggregate 
class Item {
public:
    Item(std::string name,
         std::string category, 
         int num);
    Item();
    virtual ~Item();

    std::string getItemName() const { return itemName; }
    std::string getItemCategory() const { return itemCategory; }
    int getItemNumber() const { return itemNumber; }

private:    
    std::string itemName;
    std::string itemCategory;
    int itemNumber;        
};

std::ostream& operator<<(std::ostream& outc, const Item & item);

#endif // ITEMITERATOR_H_