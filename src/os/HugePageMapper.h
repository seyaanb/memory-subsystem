#pragma once

#include <cstddef>

namespace memory::os {

class HugePageMapper {
    public:
        explicit HugePageMapper(std:size_t size);
        ~HugePageMapper();

        
}


}