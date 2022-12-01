#include "lib.h"
bool Nprimo(int n){

    if (n < 1)
        return false;
    else if (n == 2, n== 1)
        return true;

    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
  
    return true;
}
