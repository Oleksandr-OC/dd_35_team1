#pragma once
#include "Book.h"

Book::Book() : Publication()
{
    summary = "";
}

Book::Book(string name, string author, int year, string summary)
    : Publication(name, author, year)
{
    this->summary = summary;
}

void Book::setSummary(string summary)
{
    this->summary = summary;
}

string Book::getSummary()
{
    return summary;
}

string Book::formDescription()
{
    return "Book\n"
        "Name: " + name +
        "\nAuthor: " + author +
        "\nYear: " + to_string(year) +
        "\nSummary: " + summary;
}

Book::~Book()
{
}