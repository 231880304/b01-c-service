#include <stdio.h>
#include "config.h"
#include "extra.h"

int helper(void);

int main(void) {
    printf("%d\n", VALUE + helper());
    return 0;
}
