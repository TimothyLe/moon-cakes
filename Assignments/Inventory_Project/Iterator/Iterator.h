#ifndef ITERATOR_H_
#define ITERATOR_H_

template <class Item>

class Iterator {
public:
	virtual void first() = 0;
	virtual void next() = 0;
	virtual bool isDone() const = 0;
	virtual Item currentItem() const = 0;
};

#endif // ITERATOR_H_