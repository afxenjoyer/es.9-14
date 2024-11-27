#include <stdbool.h>
#include "retteperp.h"

bool RettePerpendicolari(float m1, float m2)
{
    bool scelta;
    if (m1 * m2 == -1.0)
    {
        scelta = true;
    }
    else
        scelta = false;

    return scelta;
}