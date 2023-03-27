#include "Videocard.h"
#include <string>


Videocard::Videocard(std::string model, int memory) : model_(model), memory_(memory) {}

std::string Videocard::getModel() const
{
	return model_;
}

int Videocard::getMemory() const
{
	return memory_;
}

void Videocard::setModel(std::string model)
{
	model_ = model;
}

void Videocard::setMemory(int memory)
{
	memory_ = memory;
}
