#ifndef ARRAYLISTITERATOR_H_
#define ARRAYLISTITERATOR_H_

#include "Iterator.h"

template <class Item>
class ArrayList;

template <class Item>
class ArrayListIterator : public Iterator<Item> {
public:
    ArrayListIterator(const ArrayList<Item> * list) :
        itemList(list),
        listIndex(0)
    {

    }

    virtual ~ArrayListIterator() {

    }

    virtual void first() {
        listIndex = 0;
    }
    virtual void next() {
        listIndex++;
    }
    virtual bool isDone() {
        return (itemList->count() <= listIndex);
    }
    virtual Item currentItem() {
        if(isDone()) return Item();
        return itemList->get(listIndex);
    }
    
private:
    const ArrayList<Item> * itemList;
    unsigned int listIndex;
};

#endif // ARRAYLISTITERATOR_H_