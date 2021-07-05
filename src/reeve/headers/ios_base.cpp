#include "ios_base_64.h"
#include "i64.h"
#include <string>


/**
 *  Standart Print Function.  
 */
I64 print(const std::string& FString)
{
    // CheckString size and print each character 
    for // NOLINT(modernize-loop-convert)
            (int i = 0; i < FString.size(); ++i)
        putchar(FString[i]);
    return (1);
}