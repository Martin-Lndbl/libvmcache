#pragma once

#include <stdint.h>
#include <stdlib.h>

inline uint64_t envOr(const char* env, uint64_t value) {
    if(getenv(env))
        return atof(getenv(env));
    return value;
}

void configure(unsigned nthreads, uint64_t n, uint64_t runForSec, bool isRndread);
int setup();
void tpcc();
