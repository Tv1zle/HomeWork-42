#pragma once


class Mouse
{
private:
    std::string model_;
    int dpi_;

public:
    Mouse(std::string model, int dpi);
    std::string getModel() const;
    int getDpi() const;
    void setModel(std::string model);
    void setDpi(int dpi);
};
