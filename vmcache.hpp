#pragma once

#include <stdint.h>
#include <stdlib.h>

inline uint64_t envOr(const char* env, uint64_t value) {
    if(getenv(env))
        return atof(getenv(env));
    return value;
}

namespace vmcache {

void configure(unsigned nthreads, uint64_t n, uint64_t runForSec);

int rndread();

namespace tpcc {

int setup();
void run();

}

} // namespace vmcach3
