#include "Mouse.h"
#include <string>

Mouse::Mouse(std::string model, int dpi) : model_(model), dpi_(dpi) {}


std::string Mouse::getModel() const
{
	return model_;
}

int Mouse::getDpi() const
{
	return dpi_;
}

void Mouse::setModel(std::string model)
{
	model = model_;
}

void Mouse::setDpi(int dpi)
{
	dpi = dpi_;
}