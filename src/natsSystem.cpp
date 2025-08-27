#include "natsSystem.h"

void natsSystem::initiationSystem()
{
    io = new IOFile;
    io->read(fn);
    delete io;
}
