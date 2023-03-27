#include "Processor.h"
#include <string>


Processor::Processor(std::string model, double clock_speed) : model_(model), clock_speed_(clock_speed) {}

std::string Processor::getModel() const {
    return model_;
}

double Processor::getClockSpeed() const {
    return clock_speed_;
}

void Processor::setModel(std::string model) {
    model_ = model;
}

void Processor::setClockSpeed(double clock_speed) {
    clock_speed_ = clock_speed;
}