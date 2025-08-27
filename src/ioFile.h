#ifndef IOFILE_H
#define IOFILE_H

#include <filesystem>
#include <fstream>
#include <string>
#include <map>

struct M_CALLBACK_Result
{
    bool isSuccess;
    std::string messageUser;
    M_CALLBACK_Result() : isSuccess(false), messageUser("") {}
    M_CALLBACK_Result(bool s, const std::string& m) : isSuccess(s), messageUser(m) {}
    friend std::ostream& operator<<(std::ostream& os, const M_CALLBACK_Result& res)
    {
        if (res.isSuccess)
        {
            os << "Success: " << res.messageUser;
        }
        else
        {
            os << "Error: " << res.messageUser;
        }
        return os;
    }
};

//IO Class
class IOFile
{
private:
    std::map<std::string,std::map<std::string,std::string>> data;

public:
    M_CALLBACK_Result read(const std::string &filename);
    // M_CALLBACK_Result write(std::string& filename) const;
};

#endif // IOFILE_H
