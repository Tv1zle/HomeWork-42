#pragma once


class Processor
{
private:
    std::string model_;
    double clock_speed_;

public:
    Processor(std::string model, double clock_speed);
    std::string getModel() const;
    double getClockSpeed() const;
    void setModel(std::string model);
    void setClockSpeed(double clock_speed);
};