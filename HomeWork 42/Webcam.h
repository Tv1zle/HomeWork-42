#pragma once


class Webcam
{
private:
    std::string model_;
    int resolution_;

public:
    Webcam(std::string model, int resolution);
    std::string getModel() const;
    int getResolution() const;
    void setModel(std::string model);
    void setResolution(int resolution);
};
