#include "Ram.h"
#include <string>


Ram::Ram(std::string model, int capacity) : model_(model), capacity_(capacity) {}

std::string Ram::getModel() const
{
	return model_;
}

int Ram::getCapacity() const
{
	return capacity_;
}

void Ram::setModel(std::string model)
{
	model = model_;
}

void Ram::setCapacity(int capacity)
{
	capacity = capacity_;
}
