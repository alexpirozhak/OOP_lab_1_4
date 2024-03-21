//
// Created by Олександр Пірожак on 13.03.2024.
//

template<typename T>
Stack<T>::Stack()
{
    last = nullptr;
}

template<typename T>
Stack<T>::~Stack()
{
    Clear();
}

template<typename T>
void Stack<T>::Push(T value)
{
    auto node = new StackNode<T>();
    node->value = value;
    node->next = this->last;
    this->last = node;
}

template<typename T>
T Stack<T>::Pop()
{
    auto value = this->last->value;
    StackNode<T> *newLast = this->last->next;
    delete this->last;
    this->last = newLast;
    return value;
}

template<typename T>
StackNode<T> *Stack<T>::Peek() const
{
    return last;
}

template<typename T>
bool Stack<T>::IsEmpty() const
{
    return this->last == nullptr;
}

template<typename T>
void Stack<T>::Clear()
{
    while (!this->IsEmpty())
    {
        this->Pop();
    }
}