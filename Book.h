#pragma once
#include "Publication.h"

class Book :public Publication {
private:
	string summary;
public:
	Book();
	Book(string name, string author, int year, string summary);

	void setSummary(string summary);
	string getSummary();

	string formDescription() override;

	~Book();
};