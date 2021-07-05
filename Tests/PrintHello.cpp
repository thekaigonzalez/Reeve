



#include "../src/reeve/headers/reeve.h"

I64 print(const std::string&);

// entry point for the program.
int main()
{
#if defined(REEVE)
    std::string A = std::to_string(REEVE);
    print("Hello. Also: ");
#endif
}