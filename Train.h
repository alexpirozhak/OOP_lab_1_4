//
// Created by Олександр Пірожак on 13.03.2024.
//

#pragma once

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "Stack.h"

using namespace std;

class Train
{
private:
    Stack<char> wagons;

public:
    void Init();

    void Read();

    void Display() const;

    void FromFile(const string &path);

    void Split();

    string ToString() const;
};