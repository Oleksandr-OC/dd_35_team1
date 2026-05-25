#include <iostream>
#include "Library.h"
#include "Publication.h"
#include "Exception.h"

using namespace std;

int main() {
    cout << "=== Перевірка роботи гілки Exception ===\n\n";

    Library myLib("Головна Бібліотека");

    cout << "[ТЕСТ 1] Перевірка конструктора (рік <= 0):\n";
    try {
        Publication* badYearPub = new Publication("Історія", "Автор", -5);
    }
    catch (const EditionYearException& e) {
        cout << e.Message() << "\n\n";
    }

    cout << "[ТЕСТ 2] Перевірка formDescription (порожній автор):\n";
    Publication* badTitlePub = new Publication("Основи", "", 2024);

    badTitlePub->formDescription();
    cout << "\n";

    cout << "[ТЕСТ 3] Успішне додавання до бібліотеки:\n";
    Publication* goodPub = new Publication("Кобзар", "Шевченко", 1840);
    myLib.addPublication(goodPub);
    myLib.showPublications();

    return 0;
}