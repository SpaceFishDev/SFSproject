#include"PrintF.C"
namespace console {
    class ConsoleStream {
    public:
        void WriteLine(const char* prt) {
            printf(prt);
        }
        void operator<<(const char* prt) {
            printf(prt);
        }
    };
}
#pragma once
