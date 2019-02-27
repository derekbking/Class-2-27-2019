#include <iostream>

class StackOverflowException {};

template <class DT>
class ArrayStack {
    int _top;
    //ArrayClass is not implemented.
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
    //LinkedList is not implemented.
    LinkedList<DT>* S;
public:
    DT& pop();
};

template <class DT>
DT& LLStack<DT>::pop()
{
    //Check if the current value is equal to null.
    if (_info == NULL) {
        throw StackOverflowException();
    }
    else
    {
        //LinkedList#info returns the value of the current node.
        DT temp = (*s).info();
        //LinkedList#remove removes the current node.
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