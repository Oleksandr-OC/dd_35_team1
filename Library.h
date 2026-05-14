//
// Created by Oleksandr C on 14.05.2026.
//

#ifndef LIBRARY_H
#define LIBRARY_H

#include <iostream>
#include <string>
#include <vector>

class Publication;

using namespace std;

class Library
{
private:
    string name;
    vector<Publication*> publications;

public:
    Library();
    explicit Library(const string& name);

    void setName(const string& name);
    string getName();

    void addPublication(Publication* publication);
    void deletePublication(const string& publicationName);
    Publication* findPublication(string publicationName);

    void showPublications();
};

#endif