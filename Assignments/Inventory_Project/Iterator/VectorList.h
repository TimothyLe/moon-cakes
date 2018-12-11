#ifndef VECTORLIST_H_
#define VECTORLIST_H_

#include "List.h"
#include "VectorListIterator.h"
#include <algorithm>
#include <vector>

template <class Item>
class Iterator;

template <class Item>
class VectorList : public List<Item> {
public:
    VectorList() {

    }

    virtual ~VectorList() {

    }

    virtual Iterator<Item> * createIterator() const {
        return new VectorListIterator<Item>(this);
    }

    virtual unsigned int count() const {
        return listVector.size();
    }

    virtual void addItem(Item item) {
        listVector.push_back(item);
    }

    virtual const Item& get(unsigned int index) const {
        return listVector.at(index);
    }
private:
    std::vector<Item> listVector;
};

#endif // VECTORLIST_H_