#ifndef NATSSYSTEM_H
#define NATSSYSTEM_H

#include "ioFile.h"

class natsSystem
{
private:
    IOFile *io;
    std::string fn = "fn.txt";
public:
    void initiationSystem();
};

#endif // NATSSYSTEM_H
