#pragma once
#ifndef MAGAZINE_H
#define MAGAZINE_H

#include <string>
#include <vector>
#include "Publication.h"

class Magazine : public Publication {
private:
    std::vector<std::string> articles;

public:
    Magazine(const std::string& name, const std::string& author, int year);
    const std::vector<std::string>& getArticles() const;
    void addArticle(const std::string& article);
    std::string formDescription() const override;   // переопределяем
    virtual ~Magazine() = default;
};

#endif