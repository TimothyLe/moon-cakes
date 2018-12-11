#ifndef ITEMITERATOR_H_
#define ITEMITERATOR_H_

#include <string>

// Aggregate 
class Item {
public:
    Item(std::string n, int num);
    virtual ~Item();

    std::string getItemName();
    int getItemNumber();
    void setItemName(std::string n);
    void setItemNumber(int num);
    bool itemInList();
private:    
    std::string itemName;
    int itemNumber;        
};

#endif // ITEMITERATOR_H_