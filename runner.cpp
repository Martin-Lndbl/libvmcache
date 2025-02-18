#include "vmcache.hpp"

int main()
{
    unsigned nthreads = envOr("THREADS", 1);
    uint64_t n = envOr("DATASIZE", 10);
    uint64_t runForSec = envOr("RUNFOR", 30);
    bool isRndread = envOr("RNDREAD", 0);
    configure(nthreads, n, runForSec, isRndread);
    setup();
    tpcc();
}
