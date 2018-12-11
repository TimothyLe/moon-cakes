#ifndef VECTORLISTITERATOR_H_
#define VECTORLISTITERATOR_H_

#include "Iterator.h"

template <class Item>
class VectorList;

template <class Item>
class VectorListIterator : public Iterator<Item> {
public:
    VectorListIterator(const VectorList<Item> * list)
       : itemList(list),
         listIndex(0)
    {

    }
	virtual ~VectorListIterator()
	{

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
        if(isDone()) {
            // throw outOfBounds;
        }
        return itemList->get(listIndex);
    }
    
private:
    const VectorList<Item> * itemList;
    unsigned int listIndex;
};

#endif // VECTORLISTITERATOR_H_ 
