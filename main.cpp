#include <iostream>

class StackOverflowException {};

template <class DT>
class ArrayStack {
    int _top;
    ArrayClass<DT>* myStack;
public:
    ArrayStack();
    ArrayStack(int size);
    ~ArrayStack();

    DT& pop();
    void push(DT& x);
    DT& peek();
    int size();
};

template<class DT>
void ArrayStack<DT>::push(DT& x) {
    if (_top == size())
    {
        throw StackOverflowException();
    }

    myStack[_top] = x;
    _top++;
}

template <class DT>
class LLStack {
protected:
    LinkedList<DT>* S;
public:
    DT& pop();
};

template <class DT>
DT& LLStack<DT>::pop()
{
    if (_info == NULL) {
        throw StackOverflowException();
    }
    else
    {
        DT temp = (*s).info();
        (*s).remove();
        return temp;
    }
}

int main() {
    ArrayStack<int>* myStack = new ArrayStack<int>(100);

    (*myStack).push(*new int(100));
    (*myStack).push(*new int(20));

    return 0;
}