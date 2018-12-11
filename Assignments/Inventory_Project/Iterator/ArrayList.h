#ifndef ARRAYLIST_H_
#define ARRAYLIST_H_

#include "List.h"

#include "ArrayListIterator.h"

const unsigned int MAXSIZEARRAY = 50;

template <class Item>
class Iterator;

template <class Item>
class ArrayList : public List<Item> {
public:
    ArrayList() : currentSize(0) {

    }

    virtual ~ArrayList() {

    }

    virtual Iterator<Item> * createIterator() const {
        return new ArrayListIterator<Item>(this);
    }

    virtual unsigned int count() const {
        return currentSize;
    }

    virtual void addItem(Item item) {
        if(currentSize < MAXSIZEARRAY) {
            listArray[currentSize] = item;
            currentSize++;
        }
    }

    virtual const Item& get(unsigned int index) const {
        return listArray[index];
    }
private:
    Item listArray[MAXSIZEARRAY];
    unsigned int currentSize;
};

#endif // ARRAYLIST_H_