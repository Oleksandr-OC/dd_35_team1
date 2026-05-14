//
// Created by Oleksandr C on 14.05.2026.
//

#include "Library.h"
#include "Publication.h"

Library::Library()
{
    this->name = "N/D";
}

Library::Library(const string& name)
{
    this->name = name;
}

void Library::setName(const string& name)
{
    this->name = name;
}

string Library::getName()
{
    return name;
}

void Library::addPublication(Publication* publication)
{
    publications.push_back(publication);
}

void Library::deletePublication(const string& publicationName)
{
    for (int i = 0; i < publications.size(); i++)
    {
        if (publications[i]->getName() == publicationName)
        {
            publications.erase(publications.begin() + i);
            cout << "Издание удалено: " << publicationName << endl << endl;
            return;
        }
    }

    cout << "Издание не найдено!"<< "(" << publicationName << ")" << endl;
}

Publication* Library::findPublication(string publicationName)
{
    for (int i = 0; i < publications.size(); i++)
    {
        if (publications[i]->getName() == publicationName)
        {
            return publications[i];
        }
    }

    return nullptr;
}

void Library::showPublications()
{
    cout << "Библиотека: " << name << endl;
    cout << "Список изданий:" << endl;

    for (int i = 0; i < publications.size(); i++)
    {
        cout << publications[i]->formDescription() << endl;
    }
    cout << endl;
}
