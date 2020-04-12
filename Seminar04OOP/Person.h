#pragma once
#include <string>
#include <vector>
class Person
{
private:
	std::string fname;
	std::string name;
public:
	Person(std::string fname, std::string name) { this->fname = fname; this->name = name; };

	std::string GetfName() { return this->fname; };

	std::string GetName() { return this->name; };

	void SetName(std::string other) { name = other; };

	void SetfName(std::string other) { fname = other; };

	
};

