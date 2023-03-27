#pragma once


class Printer
{
private:
    std::string model_;
    std::string type_;

public:
    Printer(std::string model, std::string type);
    std::string getModel() const;
    std::string getType() const;
    void setModel(std::string model);
    void setType(std::string type);
};
