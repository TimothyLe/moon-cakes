#ifndef LIST_H_
#define LIST_H_

#include "Iterator.h"

template <class Item>
class List {
public:
	virtual Iterator<Item> * createIterator() const = 0;
	virtual unsigned int count() const              = 0;
	virtual void addItem(Item item)                 = 0;
};

#endif // LIST_H_