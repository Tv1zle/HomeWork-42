#include "Printer.h"
#include <string>

Printer::Printer(std::string model, std::string type) : model_(model), type_(type) {}


std::string Printer::getModel() const
{
	return model_;
}

std::string Printer::getType() const
{
	return type_;
}

void Printer::setModel(std::string model)
{
	model = model_;
}

void Printer::setType(std::string type)
{
	type = type_;
}
