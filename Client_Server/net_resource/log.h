#ifndef LOG_H
#define LOG_H

#include <fstream>
#include <stdarg.h>
#include <string>
#include <time.h>
#define LogFileName "/home/student/Study/Client_Server/log.txt"

namespace Client_Server{

    class Log {
    public:
        Log(const std::string FileName);
        ~Log();
        void Write(const char* LogLine, ...);
    private:
        std::ofstream m_stream;
    };

}

#endif // LOG_H
