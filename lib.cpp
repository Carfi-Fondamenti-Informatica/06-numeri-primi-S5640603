#include "lib.h"

bool Nprimo (int a) {
    for (int i = 2; i < a; i++) {
        if (a % i == 0) {

            return false;
        }
    }
    return true;
}
