#include <cstdio>
#include <cstdlib>
#include "CommonPara.h"

static void Fail(const char* msg)
{
    std::printf("FAIL %s\n", msg);
    std::exit(1);
}

int main()
{
    if (maxnumchains != 1200)
        Fail("maxnumchains");
    if (aad3[0][0] != 'A' || aad3[0][1] != 'L' || aad3[0][2] != 'A')
        Fail("ALA");
    std::printf("OK CudaMolecularTests\n");
    return 0;
}
