#include "Webcam.h"
#include <string>


Webcam::Webcam(std::string model, int resolution) : model_(model), resolution_(resolution) {}

std::string Webcam::getModel() const
{
	return model_;
}

int Webcam::getResolution() const
{
	return resolution_;
}

void Webcam::setModel(std::string model)
{
	model_ = model;
}

void Webcam::setResolution(int resolution)
{
	resolution_ = resolution;
}