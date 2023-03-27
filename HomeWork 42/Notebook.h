#pragma once
#include "Processor.h"
#include "Ram.h"
#include "Mouse.h"
#include "Webcam.h"
#include "Printer.h"
#include "Videocard.h"


class Notebook 
{
private:
    Processor processor_;
    Ram ram_;
    Mouse mouse_;
    Webcam webcam_;
    Printer printer_;
    Videocard videocard_;

public:
    Notebook(const Processor& processor, const Ram& ram, const Mouse& mouse, const Webcam& webcam, const Printer& printer, const Videocard& videocard);
    void printInfo() const;
};