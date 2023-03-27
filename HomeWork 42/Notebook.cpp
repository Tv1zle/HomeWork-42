#include "Notebook.h"
#include <iostream>


Notebook::Notebook(const Processor& processor, const Ram& ram, const Mouse& mouse, const Webcam& webcam, const Printer& printer, const Videocard& videocard)
    : processor_(processor), ram_(ram), mouse_(mouse), webcam_(webcam), printer_(printer), videocard_(videocard) {}


void Notebook::printInfo() const {
    std::cout << "Processor: " << processor_.getModel() << " with clock speed of " << processor_.getClockSpeed() << " GHz" << std::endl;
    std::cout << "RAM: " << ram_.getCapacity() << " GB" << std::endl;
    std::cout << "Mouse: " << mouse_.getDpi() << " DPI" << std::endl;
    std::cout << "Webcam: " << webcam_.getResolution() << " MP" << std::endl;
    std::cout << "Printer: " << printer_.getType() << std::endl;
    std::cout << "Video card: " << videocard_.getModel() << " with " << videocard_.getMemory() << " GB memory" << std::endl;
}