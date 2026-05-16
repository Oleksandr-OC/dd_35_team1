#include "Magazine.h"
#include "Exceptions.h"
#include <iostream>

Magazine::Magazine(const std::string& name, const std::string& author, int year)
    : Publication(name, author, year)   
{
}

const std::vector<std::string>& Magazine::getArticles() const {
    return articles;
}

void Magazine::addArticle(const std::string& article) {
    articles.push_back(article);
}

std::string Magazine::formDescription() const {
    try {
        // Проверка на пустые название или автора
        if (getName().empty() || getAuthor().empty()) {
            throw BookException("Ваше_имя", "Название или автор журнала пустые");
        }
    }
    catch (const BookException& e) {
        std::cout << e.Message() << std::endl;
        return "Ошибка: некорректные данные журнала";
    }

    // Формируем описание
    std::string desc = "Журнал: " + getName() + ", автор: " + getAuthor() +
        ", год: " + std::to_string(getYear()) + "\nСтатьи:\n";
    for (const auto& art : articles) {
        desc += "- " + art + "\n";
    }
    return desc;
}