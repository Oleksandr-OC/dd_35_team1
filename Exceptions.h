#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H

#include <string>

class PublicationException {
protected:
    std::string employeeName;
public:
    PublicationException(const std::string& name) : employeeName(name) {}
    virtual std::string Message() const = 0;
    virtual ~PublicationException() = default;
};

class BookException : public PublicationException {
    std::string errorDetail;
public:
    BookException(const std::string& name, const std::string& detail)
        : PublicationException(name), errorDetail(detail) {}
    std::string Message() const override {
        return "BookException от " + employeeName + ": " + errorDetail;
    }
};

class EditionYearException : public PublicationException {
    int wrongYear;
public:
    EditionYearException(const std::string& name, int year)
        : PublicationException(name), wrongYear(year) {}
    std::string Message() const override {
        return "Неможливо створити видання - вказано некоректний рік видання: " + std::to_string(wrongYear);
    }
};

#endif
