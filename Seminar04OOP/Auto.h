#pragma once
#include <string>
class Auto
{
private:
	int Id;
	std::string name;
public:
	Auto(int Id, std::string name) { this->Id = Id; this->name = name; };

	int GetId() { return this->Id; };

	std::string GetName() { return this->name; };

	void SetId(int other) { Id = other; };

	void SetName(std::string other) { name = other; };

		
};

