//
// Created by Oleksandr C on 14.05.2026.
//

#ifndef PUBLICATION_H
#define PUBLICATION_H

#include <iostream>
#include <string>

using namespace std;

class Publication
{
protected:
    string name;
    string author;
    int year;

public:
    virtual ~Publication() = default;
    Publication();
    Publication(string name, string author, int year);

    void setName(string name);
    string getName();

    void setAuthor(string author);
    string getAuthor();

    void setYear(int year);
    int getYear();

    virtual string formDescription();
};

#endif