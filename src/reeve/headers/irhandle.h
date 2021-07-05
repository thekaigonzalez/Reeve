#include "ios_base_64.h"



#define REEVE_HANDLE_CODE(x, GRCode) \
    if (GRCode == true) \
    { \
        std::cout << x() << std::endl;\
    }\
    else {                                    \
        std::stringstream RETURN_CODES;            \
        RETURN_CODES << x();                                      \
    }                                         \


