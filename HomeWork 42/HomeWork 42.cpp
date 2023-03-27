#include <iostream>
#include "Notebook.h"


int main()
{
    Mouse mouse("Logitech G305", 800);
    Videocard gpu("NVIDIA RTX 4090", 8192);
    Processor cpu("Intel core I5", 4.9);
    Ram ram("Kingsman", 16000);
    Webcam webcam("Web", 1080);
    Printer printer("Kal", "Lazer");
    Notebook notebook(cpu, ram, mouse, webcam, printer, gpu);
    notebook.printInfo();
}
