#pragma once


class Ram
{
private:
    std::string model_;
    int capacity_;

public:
    Ram(std::string model, int capacity);
    std::string getModel() const;
    int getCapacity() const;
    void setModel(std::string model);
    void setCapacity(int capacity);
};