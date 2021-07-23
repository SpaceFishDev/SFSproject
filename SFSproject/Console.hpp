#include"PrintF.C"
namespace console {
    class ConsoleStream {
        void WriteLine(const char* prt) {
            printf(prt);
        }
        void operator<<(const char* prt) {
            printf(prt);
        }
    };
}
    