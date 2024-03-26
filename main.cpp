#include <iostream>
using namespace std;
class Motherboard
{
public:
    string model;
    int RamSlotsCounter;
};
class Monitor
{
public:
    int hertz_rate;
    int width;
};
class Keyboard
{
public:
    string size;
    int noise;
};
class RAM
{
public:
    int speedRate;
    string generation;
};
class CPU
{
public:
    int HertzRate;
    string generation;
    string model;
    string producer;
};
class GPU
{
public:
    int VideoMemoryCounter;
    string model;
    string producer;
};
class Cooler
{
public:
    int efficiency;
    string SocketMadeFor;
};
class Computer
{
public:
    CPU cpu; 
    RAM ram;
    Motherboard MB;
    Cooler cooler;
    Computer()
    {
        this->cpu = new CPU();
        this->ram = new RAM();
        this->MB = new Motherboard();
        this->cooler = new Cooler();
       
    }
    GPU gpu;
    Keyboard key;
    Monitor monitor;
    Computer(GPU SomeGPU, Keyboard SomeKey, Monitor SomeMonitor)
    {
        this->gpu = SomeGPU;
        this->key = SomeKey;
        this->monitor = SomeMonitor;
    }
};
int main()
{
    setlocale(0, "ru");
    Computer comp;
    comp.cpu.model = "i9-14900KS";
    comp.gpu.model = "RTX 4090";
    comp.ram.speedRate = 6200;
    comp.ram.generation = "DDR5";
    comp.MB.model = "AORUS ELITE AX Z790";
    comp.cooler.efficiency = 300;
    comp.key.size = "ATX";
    comp.monitor.hertz_rate = 360;
    comp.monitor.width = 34;
}
