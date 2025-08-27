#include "ioFile.h"

M_CALLBACK_Result IOFile::read(const std::string &filename)
{
    std::ofstream file(filename);
    if (!file.is_open())
    {
        return M_CALLBACK_Result(false,"(File is empty!)");
    }

}

// M_CALLBACK_Result IOFile::write(const std::string &filename) const
// {
//     return M_CALLBACK_Result(false,filename);
// }
