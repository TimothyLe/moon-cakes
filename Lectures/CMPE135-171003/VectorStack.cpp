#include <string>
#include <vector>

using namespace std;

template<typename T>
class Stack : public vector<T>
{
public:
    Stack();

    void push(T item);
    T pop();
};

template<typename T>
Stack<T>::Stack() {}

template<typename T>
void Stack<T>::push(T item)
{
    this->push_back(item);
}

template<typename T>
T Stack<T>::pop()
{
    T top_item = this->at(this->size() - 1);
    this->pop_back();
    return top_item;
}

int main()
{
    Stack<string> stk;

    stk.push("A");
    stk.push("B");
    stk.push("C");

    stk.erase(stk.begin() + 1);  // remove "B"
}
