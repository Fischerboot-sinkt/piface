#include "../piface/pfio.h"

int main(void)
{
    if (pfio_init() < 0)
        exit(-1);

    pfio_deinit();
    return 0;
}
