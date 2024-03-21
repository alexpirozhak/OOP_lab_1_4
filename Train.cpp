//
// Created by Олександр Пірожак on 13.03.2024.
//

#include "Train.h"

void Train::Init() {};

void Train::Read()
{
    wagons.Clear();
    cout << "Create a train: ";
    string content;
    cin >> content;
    cout << endl;
    for (char wagonType: content)
    {
        wagons.Push(wagonType);
    }
}

void Train::Display() const
{
    cout << ToString() << endl;
}

void Train::FromFile(const string &path)
{
    ifstream fileStream(path);
    if (!fileStream.is_open())
    {
        cerr << "Could not open file: " << path << endl;
        return;
    }
    stringstream buffer;
    buffer << fileStream.rdbuf();
    string content = buffer.str();

    for (int i = 0; i < content.size(); i++)
    {
        auto wagonType = content.at(i);
        wagons.Push(wagonType);
    }
}

void Train::Split()
{
    Train t1, t2;

    while (!wagons.IsEmpty())
    {
        auto wagon = wagons.Pop();
        if (wagon == '1')
            t1.wagons.Push(wagon);
        else
            t2.wagons.Push(wagon);
    }
    wagons.Clear();

    t1.Display();
    t2.Display();
}

string Train::ToString() const
{
    string result;
    auto current = wagons.Peek();

    while (current != nullptr)
    {
        result += current->value;
        current = current->next;
    }

    return result;
}