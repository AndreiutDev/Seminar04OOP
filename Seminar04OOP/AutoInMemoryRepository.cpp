#include "AutoInMemoryRepository.h"

Auto AutoInMemoryRepository::findOne(int id)
{
	std::vector<Auto>::iterator ptr;
	for (ptr = repo.begin(); ptr < repo.end(); ptr++)
	{
		if (ptr->GetId() == id)
			return (*ptr);
	}
	Auto auto_null = Auto(-1, "");
	return auto_null;
}

std::vector<Auto> AutoInMemoryRepository::findAll()
{
	std::vector<Auto> cpy;
	std::vector<Auto>::iterator ptr;
	for (ptr = repo.begin(); ptr < repo.end(); ptr++)
	{
		cpy.push_back(*ptr);
	}
	return cpy;
}

Auto AutoInMemoryRepository::save(Auto entity)
{
	std::vector<Auto>::iterator ptr;
	for (ptr = repo.begin(); ptr < repo.end(); ptr++)
	{
		if (ptr->GetId() == entity.GetId())
			return (entity);
	}
	repo.push_back(entity);
	Auto auto_null = Auto(-1, "");
	return auto_null;
}

Auto AutoInMemoryRepository::update(Auto entity)
{
	std::vector<Auto>::iterator ptr;
	for (ptr = repo.begin(); ptr < repo.end(); ptr++)
	{
		if (ptr->GetId() == entity.GetId())
		{
			ptr->SetName(entity.GetName());
			Auto auto_null = Auto(-1, "");
			return auto_null;
		}
	}
	return entity;
}

Auto AutoInMemoryRepository::del(Auto entity)
{
	std::vector<Auto>::iterator ptr;
	for (ptr = repo.begin(); ptr < repo.end(); ptr++)
	{
		if (ptr->GetId() == entity.GetId())
		{
			repo.erase(ptr);
			Auto auto_null = Auto(-1, "");
			return auto_null;
		}
	}
	return entity;
}