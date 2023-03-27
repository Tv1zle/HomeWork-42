#pragma once


class Videocard
{
private:
    std::string model_;
    int memory_;

public:
    Videocard(std::string model, int memory);
    std::string getModel() const;
    int getMemory() const;
    void setModel(std::string model);
    void setMemory(int memory);
};