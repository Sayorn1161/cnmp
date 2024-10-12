#ifndef COMPUTER_H
#define COMPUTER_H

#include "CPU.h"
#include "RAM.h"
#include "Storage.h"
#include "GPU.h"
#include "Motherboard.h"
#include "PowerSupply.h"
#include "Display.h"
#include "InputDevices.h"
#include "OS.h"

class Computer {
public:
    Computer(CPU* cpu, RAM* ram, Storage* storage, GPU* gpu, Motherboard* motherboard, PowerSupply* powerSupply, Display* display, InputDevices* inputDevices, OS* os);
    void print() const;

private:
    CPU* cpu;
    RAM* ram;
    Storage* storage;
    GPU* gpu;
    Motherboard* motherboard;
    PowerSupply* powerSupply;
    Display* display;
    InputDevices* inputDevices;
    OS* os;
};

#endif // COMPUTER_H
