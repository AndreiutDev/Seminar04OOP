#pragma once
#include "Person.h"
#include "AutoInMemoryRepository.h"

class AutoController
{
private:
	AutoInMemoryRepository autoRepo;
	Person user;
public:
	Auto findOne(int id) { return autoRepo.findOne(id); }

	std::vector<Auto> findAll() { return autoRepo.findAll(); };

	Auto save(Auto entity) { autoRepo.save(entity);  };

	Auto update(Auto entity) { autoRepo.update(entity); };

	Auto del(Auto entity) { autoRepo.del(entity); };
};

