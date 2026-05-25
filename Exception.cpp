#include "Exception.h"

PublicationException::PublicationException(string empName) : employeeName(empName) {}

BookException::BookException(string empName) : PublicationException(empName) {}

string BookException::Message() const {
    return "[BookException від " + employeeName + "]: Помилка! Назва або Автор не можуть бути порожніми.";
}

EditionYearException::EditionYearException(string empName, int year)
    : PublicationException(empName), invalidYear(year) {}

string EditionYearException::Message() const {
    return "Неможливо створити видання - вказано некоректний рік видання: " + to_string(invalidYear);
}