#include <cstdint>
#include <limits>

uint64_t forwardDistance(
    uint64_t start,
    uint64_t end,
    unsigned width
){
    if(end < start){
        if(width == 64 ){            
            return end + (UINT64_MAX - start) + 1;
        }else{
            end = end + (1ULL << width);
        }
    }
    return end -start;
}
