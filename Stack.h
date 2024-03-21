//
// Created by Олександр Пірожак on 13.03.2024.
//

#pragma once

template<typename T>
struct StackNode
{
    StackNode *next;
    T value;
};

template<typename T>
class Stack
{
private:
    StackNode<T> *last;

public:
    Stack();

    ~Stack();

    void Push(T value);

    T Pop();

    StackNode<T> *Peek() const;

    bool IsEmpty() const;

    void Clear();
};

#include "Stack.inl"