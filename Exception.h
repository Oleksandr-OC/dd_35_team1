#pragma once
#include <string>

using namespace std;

class PublicationException {
protected:
    string employeeName;
public:
    PublicationException(string empName);
    virtual ~PublicationException() = default;
    virtual string Message() const = 0;
};

class BookException : public PublicationException {
public:
    BookException(string empName);
    string Message() const override;
};

class EditionYearException : public PublicationException {
private:
    int invalidYear;
public:
    EditionYearException(string empName, int year);
    string Message() const override;
};