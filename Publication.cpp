//
// Created by Oleksandr C on 14.05.2026.
//

#include "Publication.h"
#include "Exceptions.h"

Publication::Publication()
{
    this->name = "N/D";
    this->author = "N/D";
    this->year = -1;
}

Publication::Publication(string name, string author, int year)
{
    if (year < 0)
    {
        throw EditionYearException(name, year);
    }

    this->name = name;
    this->author = author;
    this->year = year;
}

void Publication::setName(string name)
{
    this->name = name;
}

string Publication::getName() const
{
    return name;
}

void Publication::setAuthor(string author)
{
    this->author = author;
}

string Publication::getAuthor() const
{
    return author;
}

void Publication::setYear(int year)
{
    this->year = year;
}

int Publication::getYear() const
{
    return year;
}

string Publication::formDescription() const
{
    return "Название: " + name +
           ", Автор: " + author +
           ", Год: " + to_string(year);
}